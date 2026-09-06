

#include <stdio.h>
#include <cs50.h>


int main(void) {
    printf("[Your super simple calculator]\n");
    printf("[Operatore]=> [+, -, *, /]\n");

    long firstNumber = get_long("\nEnter first number: ");
    char operator = get_char("\nEnter chosen operator: ");
    long secondNumber = get_long("\nEnter second number: ");
    long result = 0;

    if (operator == '+') {
        result = firstNumber + secondNumber;
        printf("Result of the Addition: %ld\n", result);
    } 
    else if (operator == '-') {
        result = firstNumber - secondNumber;
        printf("Result of the Subtraction: %ld\n", result);
    }
    else if (operator == '*') {
        result = firstNumber * secondNumber;
        printf("Result of the Multiplication: %ld\n", result);
    }
    else if (operator == '/') {
        result = firstNumber / secondNumber;
        printf("Result of the Division: %ld\n", result);
    }
    else {
        printf("Incorrect Operation");
    }
}



