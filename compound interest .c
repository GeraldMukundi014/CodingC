#include<stdio.h>
int main(){
    float principal , time , rate, compound_interest;
    
    printf("Enter the principle amount:");
    scanf("%f",&principal);
    
    printf("Enter the rate of interest:");
    scanf("%f",&rate);
    
    printf("Enter the time of period(years):");
    scanf("%f",&time);
    
    compound_interest = principal*((1+rate/100),time);
    printf("compound_interest = %.2f\n", compound_interest);
    return 0;
}