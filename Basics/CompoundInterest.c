//Program to calculate compound interest
#include <stdio.h>
#include<math.h>
int main() {
    double principal, rate, t;
    printf("Enter the principal amount, rate and time\n");
    scanf("%lf %lf %lf",&principal,&rate,&t);
    double amount;
    //formula: amount = principal * ((1+R/100)^time)
    //Compound Interest = amount - principal amount
    amount = principal * ((pow((1 + rate/100),t)));
             
    double ComInterest = amount - principal;
    printf("The compund interest is %lf\n", ComInterest);
    
    return 0;
}
