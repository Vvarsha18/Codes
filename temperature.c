//c program Converting Temperature Celsius into Fahrenheit
#include<stdio.h>
int main()
{
	
    float celsius, fahrenheit;
    
    // Asking for input
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("   Celsius =  %f Fahrenheit", fahrenheit);
    return 0;
}
