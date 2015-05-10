#include "z.h"
int main()
{
int *a;
int b=2;
a=&b;
printf("a %i\n",*a);
*a=22;//contents of location pointed by be 22
printf("b is %i\n",b);
}
