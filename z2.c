#include "z.h"
int main()
{
int *a;
int q=2;
a=&q;
printf("a is now %i\n",*a);
long *b;
printf("b is now %ld\n",*b);
b=(long *)&a;
printf("b is now %ld\n",*b);
}
