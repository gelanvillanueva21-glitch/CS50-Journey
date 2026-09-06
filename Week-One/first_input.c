
#include <cs50.h>
#include <stdio.h>


int length(string text) {
    int str_length = 0;
    for (int i = 0;text[i] != '\0'; i++) {
        str_length++;
    }
    return str_length;
}


int main(void) {
    string answer = get_string("What's your name?: ");
    printf("hello, %s\n", answer);
    if (length(answer) >= 5) {
        printf("Welcome to the club %s\n", answer);
    } else {
        printf("Must be at least 5 characters\n");
    }
    
}