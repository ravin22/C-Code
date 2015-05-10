#include <stdio.h>
#include <stdlib.h>
#include<stdarg.h>
int add(int count,...)
{
va_list vl; //argument pointer variable
int sum=0;
va_start(vl,count);
sum=sum+va_arg(vl,int)+va_arg(vl,int)+va_arg(vl,int)+va_arg(vl,int);
va_end(vl);
return sum;
}

int main()
{
printf("first add is %d\n",add(6,3,4,5,6,7,8));
printf("second add is %d\n",add(3,3,4,5,7));
return 0;
}
