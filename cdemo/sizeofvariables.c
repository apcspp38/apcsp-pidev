#include <stdio.h>

int main()
{
int a = 10;
char b = a;
float c = 3.5;
double d = 4.10847847598479274;
unsigned int e = 7;
signed char f = b;
printf("Var a has a size of %d bytes\n", sizeof(a));
printf("Var b has a size of %d bytes\n", sizeof(b));
printf("Var c has a size of %d bytes\n", sizeof(c));
printf("Var d has a size of %d bytes\n", sizeof(d));
printf("Var e has a size of %d bytes\n", sizeof(e));
printf("var f has a size of %d bytes\n", sizeof(f));
}
