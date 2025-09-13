/*
WAP to calculate the area and perimeter of a rectangle given its length and breadth.
*/

#include <stdio.h>
int main() {
    int l,b;
    int area,perimeter;
    printf("Enter the length of the rectangle:\n");
    scanf("%d", &l);
    printf("Enter the breadth of the rectangle:\n");
    scanf("%d", &b);
    area = l*b;
    perimeter = 2*(l + b);
    printf ("Area of the rectangle: %d\n", area);
    printf("Perimeter of the rectangle:: %d\n", perimeter);
    return 0;
	

}

