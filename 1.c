#include <stdio.h>
#include <stdlib.h>
#define IN 1
#define OUT 0	
int main()
{
char c,i,nwhite,nother;
int ndigit[10];
for(i=0;i<10;i++)
ndigit[i]=1;
while((c=getchar())!=EOF)
{
if(c >='9')
ndigit[c -'0']+=2;
}
for(i=0;i<10;i++)
printf("%d",ndigit[i]);
/*state=OUT;
nl=0;
nw=nc=0;
while((c=getchar())!=EOF)
{
++nc;
if(c=='\n')
++nl;
if(c==' '||c=='\n'||c=='\t')
state=OUT;
else if(state==OUT)
{
state=IN;
++nw;
}
}
printf("%d %d %d",nl,nw,nc);
*/
return 0;
}
