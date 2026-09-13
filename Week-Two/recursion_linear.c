
#include <stdio.h>
#include <stdbool.h>


bool linear(int numbers[], int target, int index) {
    if (numbers[index] == target) {
        return true;
    }

    if (index == 9) {
        return false;
    }
    return linear(numbers, target, index + 1);
}


int main(void) {

    int numbers[] = {1, 6, 7, 2, 31, 13, 25, 78, 91};
    int target = 25;
    if (linear(numbers, target, 0)) {
        printf("Found it.\n");
    }
    else {
        printf("Not found.\n");
    }

}

