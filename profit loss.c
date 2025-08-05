//C program to check if it is profit or loss
#include<stdio.h>
int main()
{
	int cp,sp, amt; //amt=amount
    
    /* Input cost price and selling price of a product */
    printf("Enter cost price: ");
    scanf("%d", &cp);
    printf("Enter selling price: ");
    scanf("%d", &sp);
    
    if(sp > cp)
    {
        amt = sp - cp;
        printf("Profit = %d", amt);
    }
    else if(cp > sp)
    {
        
        amt = cp - sp;
        printf("Loss = %d", amt);
    }
    else
    {

        printf("No Profit No Loss.");
    }

    return 0;
}
