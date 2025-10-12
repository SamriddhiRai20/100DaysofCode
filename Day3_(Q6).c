//WAP to swap two numbers using a third variable.

#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter the first number:\n");
    scanf("%d", &a);
    printf("Enter the second number:\n");
    scanf("%d", &b);
    c=a;
    a=b;
    b=c;
    printf("Swapped Numbers:\n");
    printf("First number=%d\n", a);
    printf("Second number=%d\n", b);
    return 0;
	

}

