

#include <stdio.h>
#include <stdbool.h>


int main(void) {
    char *name = "Gelan Mar G. Villanueva";
    int age = 18;
    char *course = "Computer Science";
    bool is_student = true;

    printf("Student full name: %s\n", name);
    printf("Student age: %i\n", age);
    printf("Student course: %s\n", course);
    printf("is %s is a student: " ,name + is_student);

}


