//Wap to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>
int main() {
    float c,Fahrenheit;
    printf("Enter Celsius Temperature:\n");
    scanf("%f", &c);
    Fahrenheit=((9/5*c)+32);
    printf("The Fahrenheit temperature is %.2f\n", Fahrenheit);
    return 0;
	

}

