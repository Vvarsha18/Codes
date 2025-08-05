//C program to print first three powers
#include<stdio.h>
#include<math.h>
int main()
{
	 double base, exp, result;
    printf("Enter a base number: ");
    scanf("%lf", &base);
    printf("Enter an exponent: ");
    scanf("%lf", &exp);

    // calculates the power
    result = pow(base, exp);

    printf("power=%lf",  result);
    return 0;
}
	

