//C program to find maximum between two number
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two numbers\n");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("a=%d is maximum",a);
		
	}
	else if(a<b)
	{
		printf("b=%d is maximum",b);
		
	}
	else{
		printf("both are equal");
	}
	return 0;
}
