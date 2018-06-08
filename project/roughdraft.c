#include <stdio.h>
#include <string.h>


int main()
{

	char input[256];

        char work[4][256];

        for (int i = 0; i < 4; i++)

        {

                printf("Enter homework for period %d: \n", i + 1);

                fgets(input, 256, stdin);

                sscanf(input, "%s", work[i]);

        }


        for(int i = 0; i < 4; i++)

        {

                printf("\nPeriod %d: %s\n", i + 1 , work[i]);

        }


}
