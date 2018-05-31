#include <stdio.h>
#include <ctype.h>

float areaOfCircle(float r)
{
   float area;
   area = 3.14 * r * r;
   return(area);
}



float main()
{
   char input[256];
   float lower, upper;

   printf("What is the lower value?\n");
   fgets(input, 256, stdin);
   while(sscanf(input, "%f", &lower) != 1)
   {
    printf("Not a number. Try again\n", lower);
    fgets(input, 256, stdin);
    sscanf(input, "%f", &lower);
    if(sscanf(input, "%f", &lower) != 0)
     {
      printf("%f is your minimum value\n", lower);
      break;
     }
   
    }

   printf("What is the upper value?\n");
   fgets(input, 256, stdin);
   while(sscanf(input, "%f", &upper) != 1)
   {
   printf("Not a number. Try again\n");
   fgets(input, 256, stdin);
   sscanf(input, "%f", &upper);
   if(sscanf(input, "%f", &upper) != 0)
    {
      printf("%f is your maximum value\n", upper);
      break;
    }
   }


   float a = lower;
   float b = upper;
  
  
for (float c = a; c <= b; c = c + 1)
   {
   
   areaOfCircle(c);
   printf ("the area of the circle is: %f\n", areaOfCircle(c));
   }  
} 

