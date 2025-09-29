//WAP to swap two numbers without using a third variable.

#include <stdio.h>
int main() {
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a, &b);
    printf("Before Swapping: a=%d, b=%d\n", a, b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After Swapping: a=%d, b=%d\n", a, b);
    return 0;// your code goes here

}

