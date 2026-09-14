
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char *getExpression(char *prompt) {
    char *string;
    printf("Expression: \n");
    scanf(" %s", string);
    return string;
}


char *checkOperator(char *string) {
    if (strpbrk(string, "+-*/") == NULL) {
        return NULL;
    }

    if (strpbrk(string, "abcdefghijklmnopqrstuvwxyz") != NULL) {
        return NULL;
    }
    
    int result = 0;
    for (int i = 0, len = strlen(string); i < len; i++) {
        
    }
    
}


int addition(int firstNumber, int secondNumber) {
    return firstNumber + secondNumber;
}

int subtraction(int firstNumber, int secondNumber) {
    return firstNumber - secondNumber;
}

int multiplication(int firstNumber, int secondNumber) {
    return firstNumber * secondNumber;
}

int division(int firstNumber, int secondNumber) {
    return firstNumber / secondNumber;
}


int main(void) {

    printf("[Operator][+][-][*][/]");
    

}


