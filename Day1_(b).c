/*
Write a program to input two numbers and display their sum,difference,product, and quotient.
 */
#include <stdio.h>
int main() {
    int num1,num2,sum,diff,prod,quot;
    printf("Enter the first number:\n");
    scanf("%d", &num1);
    printf("Enter the second number:\n");
    scanf("%d", &num2);
    sum= num1+num2;
    diff= num1-num2;
    prod= num1*num2;
    quot= num1/num2;
    printf("The Sum is %d\n", sum);
    printf("The Difference is %d\n", diff);
    printf("The Product is %d\n", prod);
    printf("The Quotient is %d\n", quot);
    return 0;
	

}

