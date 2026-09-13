
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct structure {
    string name;
    string number;
} person;



int main(void) {

    person student[3];

    student[0].name = "Gelan Mar G. VIllanueva";
    student[0].number = "09948204818";
    student[1].name = "Chanzine Heloise Gabriel B. Candelario";
    student[1].number = "09948201924";
    student[2].name = "Molly";
    student[2].number = "09928371461";


    string name = get_string("Search Name: ");
    for (int i = 0; i < 3; i++) {
        if (strcmp(student[i].name, name) == 0) {
            printf("Found: %s\n", student[i].name);
            printf("Number: %s\n", student[i].number);
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}



