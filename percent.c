//C program to calculate percent of 5 subjects
#include<stdio.h>
int main()

{
    float eng, phy, chem, math, bio; 
    float total, average, percentage;
 
    printf("Enter marks of five subjects: :-\n ");
    scanf("%f%f%f%f%f", &eng, &phy, &chem, &math, &bio);
 
    total = eng + phy + chem + math + bio;
    average = total / 5.0;
    percentage = (total / 500.0) * 100;
 
    printf("Total marks = %f\n", total);
    printf("Average marks = %f\n", average);
    printf("Percentage = %f", percentage);
 
    return 0;
}
	

