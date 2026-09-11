

#include <stdio.h>
#include <stdbool.h>


int getFirstNumber(char *prompt) {
    int firstNumber;
    printf("%s", prompt);
    scanf("%d", &firstNumber);
    return firstNumber;
}


int getSecondNumber(char *prompt) {
    int secondNumber;
    printf("%s", prompt);
    scanf("%d", &secondNumber);
    return secondNumber;
}


char getOperator(char *prompt) {
    char operator;
    printf("%s", prompt);
    scanf(" %c", &operator);
    return operator;
}


int getSum(int firstNumber, int secondNumber) {
    return firstNumber + secondNumber;
}

int getSubtraction(int firstNumber, int secondNumber) {
    return firstNumber - secondNumber;
}

int getMultiplication(int firstNumber, int secondNumber) {
    return firstNumber * secondNumber;
}

int getDivision(int firstNumber, int secondNumber) {
    return firstNumber / secondNumber;
}

int *calculator(
    int firstNumber, 
    int secondNumber, 
    char operator
) {
    static int result;
    if (operator == '+') {
        result = getSum(firstNumber, secondNumber);
    }
    else if (operator == '-') {
        result = getSubtraction(firstNumber, secondNumber);
    }
    else if (operator == '*') {
        result = getMultiplication(firstNumber, secondNumber);
    }
    else if (operator == '/') {
        result = getDivision(firstNumber, secondNumber);
    }
    else {
        return NULL;
    }
    return &result;
}


int main(void) {
    while (true) {
        printf("[Operator]:[[+][-][*][/]]\n");
        int firstNumber = getFirstNumber("Enter First Number: ");
        int secondNumber = getSecondNumber("Enter Second Number: ");
        char operator = getOperator("Enter The Arithmethic Operator: ");

        const int *result = calculator(firstNumber, secondNumber, operator);
        if (result == NULL) {
            printf("\n[Operator]:[[+][-][*][/]]\n");
            printf("Wrong Operator Input\n\n");
        }
        else {
            printf("Result: %d", *result);
            printf("\n");
            break;
        }
    }
    
}


