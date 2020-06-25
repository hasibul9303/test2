//Prog to check whether a no. is pallindrom or not
#include<stdio.h>
main()
{
int n,u,r,i=0;
printf("Enter the no. to be checked");
scanf("%d",&n);
u=n;
while(u>0)
{
r = u%10;
i = (i*10)+r;
u = u/10;
}
if(n==i)
{printf("The no. is pallindromic");
}
else
{
printf("The no. is not pallindromic");
}
}
