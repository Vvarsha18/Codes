//c program to print area and circumference of circle
#include<stdio.h>
int main()
{
	int rad,cir,area;//rad-radius,cir-circumference
	int pi=3.14;
	printf("enter the value of radius\n");
	scanf("%d",&rad);
	area=pi*rad*rad;
	printf("area =%d \n",area);
	cir=2*pi*rad;
	printf("circumference=%d \n",cir);
	return 0;
}
