#include <stdio.h>
int main()
{
int g,a,d,n;
printf("Enter Gross salary:");
scanf("%d",&g);
if(g>5000)
{a = g * 7 / 100;
d = 2 * g / 100;}
n = g + a - d;
printf("Net salary =%d\n",n);
return 0;
}