#include<stdio.h>
#include<stdlib.h>
main()
{
	system("COLOR F0");
	//Area of triangle
	float area,h,b;
	printf("Enter the height and base\t");
	scanf("%f,%f",&h,&b);
	area= (h*b)/2;
	printf("\nArea= %f",area);
}
	
