#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char date[20];
    int day, month, year;
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    printf("Enter date in format dd/mm/yyyy:\n ");
    gets(date);  

    
    sscanf(date, "%d/%d/%d", &day, &month, &year);

    
    if (month < 1 || month > 12) {
        printf("Invalid month!\n");
        return 0;
    }

    printf("Formatted date: %02d-%s-%04d\n", day, months[month - 1], year);

    return 0;
}


