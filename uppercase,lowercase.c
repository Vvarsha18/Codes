//C program to check Uppercase, Lowercase, Special Character, or Digit
#include<stdio.h>
int main()
{
	 char ch;
    
         printf("Enter any character : ");
         scanf("%c",&ch);

        if(ch>='A' && ch<='Z')
             printf("character =%c is  an upper case",ch);
        
        else if(ch>='a' && ch<='z')
            printf("character =%c is a lower case",ch);
       
       else if(ch>='0'&& ch<='9')
           printf("it is not a character");
         else
          printf("character =%c is a special character",ch);
    
   return 0;

}


