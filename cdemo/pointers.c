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

  float d = 2;
  float e = 3;
  printf("The value of d is %d and its address is %d/n", d, &d);
  printf("The value of d is %d and its address is %d/n", e, &e);

  int* ptrtod;
  ptrtod = &d;
  int* ptrtoe;
  ptrtoe = &e;

  ptrtoe = &d;
  ptrtod = &e;

  e = *ptrtoe;
  d = *ptrtod;

  printf("New d = %d; New e = %d/n",d, e);
}
