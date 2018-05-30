#include <stdio.h>
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
	printf("%c\n", fullname);
	return fullname
};

int main()
{
	struct Student student1;

	strcpy(student1.firstname, "firstname");
	strcpy(student1.lastname, "lastname");
	
	
};
