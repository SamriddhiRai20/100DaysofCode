//WAP to calculate simple and compound interest for given principal,rate, and time.

#include <stdio.h>
#include <math.h>

int main() {
    float p,r,t,si,ci;
    printf("Enter the principal amount:\n");
    scanf("%f", &p);
    printf("Enter the annual interest rate(in percentage):\n");
    scanf("%f", &r);
    printf("Enter time period (in years):\n");
    scanf("%f", &t);
    si=(p*r*t)/100;
    ci=(p*(pow(ci+(r/100)),t));
    printf("Simple Interest is:%.2f\n", si);
    printf("Compound Interest is:%.2f", ci);
    
    
    
    return 0;
}
	// your code goes here
