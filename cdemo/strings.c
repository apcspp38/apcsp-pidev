#include <stdio.h>
#include <string.h>

int main()

{

char alphabet[27];

char alphabet2[] = "abcdefghijklmnopqrstuvwxyz";

char letter = 'a';

	for (int i = 0; i<27; i++) {


		alphabet[i] = letter;

		letter++;

	}

	alphabet[26] = '\0';

	printf("%s\n", alphabet);

	printf("%s\n", alphabet2);

	if (strcmp(alphabet, alphabet2) == 0)

		printf("The strings are identical\n");
	else
      		printf("The strings are not identical\n");

	for (int i = 0; i < 27; i++) {


		alphabet[i] = alphabet[i] - 32;

	}

	alphabet[26] = '\0';

	printf("%s\n", alphabet);

        printf("%s\n", alphabet2);

        if (strcmp(alphabet, alphabet2) == 0)

                printf("The strings are identical\n");
        else
                printf("The strings are not identical\n");

char uppercase[27];

char lowercase[27];

	strcpy(uppercase, alphabet);

	strcpy(lowercase, alphabet2);

	strcat(uppercase, lowercase);

	printf("%s\n", uppercase);

}

