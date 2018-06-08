#include <stdio.h>
#include <string.h>

void encrypt(int key, char sample[])

  {
	for (int i = 0; i <= strlen(sample); i++)
        {
                sample[i] = sample[i] + key;
		sample[i] = sample[i] % 26;
        }
        for (int i = 0; i <= strlen (sample); i++)
        {
           	printf("%s", sample);
        }
  }

int main(int argc, char* argv[])
{
  int arg = 0;
  while (arg < argc)
  {
    encrypt(2, argv[arg]);
    arg++;
  }
}
