/*Write a C programe to find area of circle*/
#include<stdio.h>
int main()
{
	float radius,area,phi=3.14;
	printf("Enter the radius of circle");
	scanf("%f",&radius);
	area=(phi*radius*radius);
	printf("Area of the circle is %f",area);
}