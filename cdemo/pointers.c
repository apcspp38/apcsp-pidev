#include <stdio.h>

int main()
{
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

  float d;
  d = 2.5;
  float e = 3.6;
  printf("The value of d is %f and its address is %d\n", d, &d);
  printf("The value of e is %f and its address is %d\n", e, &e);

  float* ptrtod;
  ptrtod = &d;
  float* ptrtoe;
  ptrtoe = &e;

  ptrtoe = &d;
  ptrtod = &e;

  float temp = *ptrtod;
  *ptrtod = *ptrtoe;
  *ptrtoe = temp;

  printf("New d = %f; New e = %f\n",d, e);
}
