//WAP to calculate the area and circumference of a circe given its radius.

#include <stdio.h>
int main() {
    float r,area,circumference;
    printf("Enter the radius of the circle:\n");
    scanf("%f", &r);
    area= 3.14*r*r;
    circumference= 2*3.14*r;
    printf("The Area of the circle is %.2f\n", area);
    printf("The Circumference of the circle is %.2f\n", circumference);
    return 0;
	

}

