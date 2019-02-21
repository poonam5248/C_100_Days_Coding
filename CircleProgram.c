//Calculate area and circumstance of circle//
#include<stdio.h>

void main()
{
	int rad;
	float pi=3.14, area, circum;
	
	printf("Enter the Radius of Circle: ");
	scanf("%d",&rad);
	
	area=pi*rad*rad;
	printf("Area of Circle is: %f\n",area);
	
	circum=2*pi*rad;
	printf("Circumstance of Circle is: %f",circum);
	
	getch();
	
}
