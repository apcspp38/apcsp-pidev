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
   sscanf(input, "%f", &lower);
   if (isdigit(lower))
 {
    printf("%f is your minimum value\n", lower);
 }
   else
 {
    printf("You did not enter a number. Enter a number\n");
    fgets(input, 256, stdin);
    sscanf(input, "%f", &lower);
   
 }

   printf("What is the upper value?\n");
   fgets(input, 256, stdin);
   sscanf(input, "%f", &upper);
   printf("%f is your maximum value\n", upper);

   float a = lower;
   float b = upper;
  
  
for (float c = a; c <= b; c = c + 1)
   {
   
   areaOfCircle(c);
   printf ("the area of the circle is: %f\n", areaOfCircle(c));
   }  
} 
