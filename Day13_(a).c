/*
WAP to implement a basic calculator using a switch-case for +,-,*,/,%.
*/

#include <stdio.h>

int main()
{
    char operator;
    double num1,num2,result;
    
    printf("Enter an operator (+,-,*,/,%)\n");
    scanf(" %c ", &operator);
    printf("Enter two numbers on which you wish to perform the operation\n");
    scanf(" %lf %lf", &num1, &num2);
	
	switch(operator)
	{
	    case '+':
	    result=num1 + num2;
	    printf("%.2lf + %.2lf = %.2lf", num1, num2, result);
	    break;
	    case '-':
	    result=num1 - num2;
	    printf("%.2lf - %.2lf = %.2lf", num1, num2, result);
	    break;
	    case '*':
	    result=num1 * num2;
	    printf("%.2lf * %.2lf = %.2lf", num1, num2, result);
	    break;
	    case '/':
	    if(num2!=0)
	    {
	        result= num1 / num2;
	        printf("%.2lf / %.2lf = %.2lf", num1, num2, result);
	    }
	    else
	    {
	        printf("Division by 0 is not allowed.\n");
	    }
	    break;
	    case '%':
	    if(num2!=0)
	    {
	        result= (int)num1 % (int)num2;
	        printf("%d %% %d = %d",(int)num1, (int)num2, (int)result);
	    }
	    else
	    {
	        printf(" Modulus Division by 0 is not allowed.\n");
	    }
	    break;
	}

}

