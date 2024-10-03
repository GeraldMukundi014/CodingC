#include<stdio.h>
int main(){
    float principal , time , rate, simple_interest;
    
    printf("Enter the principle amount:");
    scanf("%f",&principal);
    
    printf("Enter the rate of interest:");
    scanf("%f",&rate);
    
    printf("Enter the time of period(years):");
    scanf("%f",&time);
    
    simple_interest= ((principal*time*rate)/100);
    printf("simple_interest = %.2f\n", simple_interest);
    return 0;
}