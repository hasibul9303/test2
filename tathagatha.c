#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int a,b,c;
system("cls");
printf("\n enter the first no.:");
scanf("%d",&a);
printf("\n enter the second no.:");
scanf("%d",&b);
printf("\n enter the third no.:");
scanf("%d",&c);
if(a>b && a>c)
printf("\n the maximum no. =%d",a);
else if(b>c)
printf("\n the maximum no.=%d",b);
else
printf("\n the mamimux no.=%d",c);
if(a<b&&a<c)
printf("\n the minimum no. =%d",a);
else if(b<c)
printf("\n the minimum no.=%d",b);
else
printf("\n the minimum no.=%d",c);
getch();
}
