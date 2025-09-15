/*
Write a program to calculate library fine based on late days as follows:
First 5 days late: ₹2/day
Next 5 days late: ₹4/day
Next 20 days days late: ₹6/day
More than 30 days: Membership Cancelled.
*/

#include <stdio.h>
int main()
{
 int days_late;
 float fine;
 
 printf("Enter the no. of days the submission of book is late\n");
 scanf("%d", &days_late);
 
 if(days_late <= 5)
 {
     fine=days_late * 2.0;
     printf("Fine to be paid: ₹%.2f\n", fine);
 }
 else if(days_late <= 10)
 {
     fine=(5*2.0) + ((days_late - 5)*4.0);
     printf("Fine to be paid:₹%.2f\n", fine);
 }
 else if(days_late<=30)
{
    fine=(5*2.0) + (5*4.0) + ((days_late - 10)*6.0);
    printf("Fine to be paid: ₹%.2f\n", fine);
}
else
{
    printf("Membership Cancelled due to more than 30 days late submission");
}
return 0;
}
