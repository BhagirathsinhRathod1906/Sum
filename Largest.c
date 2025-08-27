#include <stdio.h>
#include <conio.h>
int main()
{
int a,b;
clrscr();
printf("Enter 2 values:");
scanf("%d %d",&a,&b);
if(a>b)
printf("Largest=%d\n",a);
else
printf("Largest=%d\n",b);
return 0;
}