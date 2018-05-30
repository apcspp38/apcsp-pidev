#include <stdio.h>

float areaOfCircle(float r)
{
   float area;
   area = 3.14 * r * r;
   return(area);
}

int main()
{

for (float a=3.5; a <= 12.5; a = a + 1)
   {
   areaOfCircle(a);
   printf ("the area of the circle is: %f\n", areaOfCircle(a));
   }
  
} 

