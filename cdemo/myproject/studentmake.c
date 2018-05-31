#include <stdio.h>
#include <string.h>
#include "studentfunc.h"

struct Student {
        char firstname[50];
        char lastname[50];
        int age;
        int studentid;
};

int main()
{
	struct Student student1;
	struct Student student2;

	struct Student studentarray[2];
	char input[256];

	char firstname[50];
	char lastname[50];
	int age;
	int studentid;

	printf("What is your first student's first name?\n");
	fgets(input, 256, stdin);
	sscanf(input, "%s", firstname);
	printf("What is your first student's last name?\n");
	fgets(input, 256, stdin);
	sscanf(input, "%s", lastname);
        printf("What is your first student's age?\n");
        while (1)
	{
		fgets(input, 256, stdin);
        	if (sscanf(input, "%d", &age) == 1) break;
		printf("Not a valid age - try again!\n");
	}
        printf("What is your first student's ID number?\n");
        while (1)
	{
		fgets(input, 256, stdin);
        	if (sscanf(input, "%d", &studentid) == 1) break;
		printf("Not a valid student id - try again!\n");
	}

	strcpy(student1.firstname, firstname);
	strcpy(student1.lastname, lastname);
	student1.age = age;
	student1.studentid = studentid;

	strcpy(studentarray[0].firstname, firstname);
	strcpy(studentarray[0].lastname, lastname);
	studentarray[0].age = age;
	studentarray[0].studentid = studentid;

        printf("What is your next student's first name?\n");
        fgets(input, 256, stdin);
        sscanf(input, "%s", firstname);
        printf("What is your next student's last name?\n");
        fgets(input, 256, stdin);
        sscanf(input, "%s", lastname);
        printf("What is your next student's age?\n");
        while (1)
        {
                fgets(input, 256, stdin);
                if (sscanf(input, "%d", &age) == 1) break;
                printf("Not a valid age - try again!\n");
        }
        printf("What is your next student's ID number?\n");
        while (1)
        {
                fgets(input, 256, stdin);
                if (sscanf(input, "%d", &studentid) == 1) break;
                printf("Not a valid student id - try again!\n");
        }

        strcpy(student2.firstname, firstname);
        strcpy(student2.lastname, lastname);
        student2.age = age;
        student2.studentid = studentid;

        strcpy(studentarray[1].firstname, firstname);
        strcpy(studentarray[1].lastname, lastname);
        studentarray[1].age = age;
        studentarray[1].studentid = studentid;

	for (int i = 0; i<2; i++)
	{
		printStudent(&(studentarray[i]));
		printf("\n");
	}
};
