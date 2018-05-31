#include <stdio.h>
#include "studentfunc.h"
#include <string.h>

void printStudent(struct Student* student)
{
        char fullname[100];
        strcpy(fullname, student->firstname);
        strcat(fullname, " ");
        strcat(fullname, student->lastname);

        printf("Student Name: %s\n", fullname);
        printf("Age: %d\n", student->age);
        printf("Student id: %d\n", student->studentid);
};

