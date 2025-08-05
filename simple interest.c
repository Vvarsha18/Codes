//C program to find simple interest
#include<stdio.h>
int main()
{
	int principal,rate,time,SI;
	printf("enter principal value,rate,time\n");
	scanf("%d%d%d",&principal,&rate,&time);
	SI=(principal*rate*time)/100 ;
	printf("SI=%d",SI);
	return 0;
}

