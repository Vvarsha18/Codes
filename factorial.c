//C program to calculate factorial of number
#include<stdio.h>
int main()
{

     int i,fact=1,number;    
     printf("Enter a number: ");    
     scanf("%d",&number);    
      for(i=1;i<=number;i++)
	  {    
      fact=fact*i;  //factorial logic  
      }    
  printf("Factorial of %d is: %d",number,fact);    
return 0;  
}   
