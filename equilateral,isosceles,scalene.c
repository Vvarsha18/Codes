//C program to Check whether the triangle is an equilateral, isosceles or scalene triangle.
#include<stdio.h>
int main()
{
	int l1, l2, l3;
   printf("Enter sides of triangle:");
   scanf("%d%d%d",&l1,&l2,&l3);
   if(l1 == l2 && l2 == l3)
      printf("The Given Triangle is equilateral");
   else if(l1 == l2 || l2 == l3 || l3 == l1)
      printf("The given Triangle is isosceles");
   else
      printf("The given Triangle is scalene");
   return 0;
}
