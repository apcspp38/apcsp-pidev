#include <stdio.h>

int main()
{

	int div = 10;
	int i;
	printf ("Numbers divisible by %d:\n",div);
	for ( i = 1; i <= 100; i++ )

	{
		if (i % div == 0)
			printf ("%d, \n",i);
	}


}
