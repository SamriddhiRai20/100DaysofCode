/*
WAP to input time in seconds and convert it to hours:minutes:seconds format.
*/

#include <stdio.h>
int main() 
{
    int time,hr,min,sec;
    printf("Enter time in seconds:\n");
    scanf("%d", &time);
    hr=time/3600;
    min=(time-(3600*hr))/60;
    sec=(time-(3600*hr)-(min*60));
    printf("hours:minutes:seconds=%d,%d,%d\n", hr,min,sec);
    return 0;
	

}

