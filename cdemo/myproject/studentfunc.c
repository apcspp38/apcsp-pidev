#include <stdio.h>
#include "studentfunc.h"
#include <string.h>

struct Student {
        char firstname[50];
        char lastname[50];
        int age;
        int studentid;
};

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

