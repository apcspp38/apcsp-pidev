#include <stdio.h>

int main()
{

	int div = 10;
	int i;
	for ( i = 1; i <= 100; i++ )

	{
		if (i % div == 0)
			printf ("Numbers divisible by 10: %d, \n",i);
	}


}
