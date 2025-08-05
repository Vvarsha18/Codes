//c program to find greatest among three numbers
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("a=%d is largest",a);
	}
	else if(b>a&&b>c)
	{
		printf("b=%d is largest",b);
	}
	else{
		printf("c=%d is largest",c);
	}
	return 0;
}
