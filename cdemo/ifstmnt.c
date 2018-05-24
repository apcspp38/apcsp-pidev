#include <stdio.h>

int main()
{
  int a = 0;
  int b = 2;

  // if statement to test is a is equal to 0
  if (a == 0)
  {
    printf("a is 0\n");
  }
  else if (a > 0)
  {
    printf("a is larger than 0\n");
  } 
  else if (a >= 0) 
  { 
    printf("a is equal to or larger than 0\n");
  } 
  else if (a != 0) 
  { 
    printf("a is not equal to 0\n");
  } 
  else if (!(a == 0))
  {
    printf("a is not 0\n");
  }
 
}
