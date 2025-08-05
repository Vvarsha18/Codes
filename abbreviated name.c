//C program to convert person name into abbreviated
#include<stdio.h>
int main()
{
	char fname[30],mname[30],lname[30];
	printf("enter the first name,middle name and last name\n");
	scanf("%s %s %s ",&fname,&mname,&lname);
	printf("abbreviated name :");
	printf("%c. %c. %s\n",fname[0],mname[0],lname);
	return 0;
	
}
