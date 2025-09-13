/*
WAP to classify a triangle as
 Equilateral,Isosceles,or Scalene based on its side lengths.
*/

#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter the sides of the triangle:\n");
    scanf("%d %d %d", &a, &b, &c);
    if(a==b && a==c)
    {
        printf("Equilateral Triangle");
    }
    else if(a==b || a==c || b==c)
    {
        printf("Isosceles Triangle");
    }
    else
    {
        printf("Scalene Triangle");
    }
return 0;
	

}

