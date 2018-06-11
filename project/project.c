#include <stdio.h>
#include <string.h>

void encrypt(int key, char sample[])
{
	
	for (int i = 0; i < strlen(sample); i++)
        {
         if (((sample[i] + key) % 26) >= 19)
        {
            sample[i] = (sample[i] + key) % 26 + 78;
        }
        else
        {
           sample[i] = ((sample[i] + key) % 26 + 104);
        }
        
            
        }
    printf("%s", sample);
   

} 

int main(int argc, char* argv[])
{
   int arg = 1;
   while (arg < argc)
  {
    encrypt(10, argv[arg]);
    arg++;
  }
   
} 
