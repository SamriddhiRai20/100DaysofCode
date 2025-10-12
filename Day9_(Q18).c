/*WAP that accepts a percentage (0-100) and assigns a grade based on the following criteria:
    90-100:Grade A
    80-89:Grade B
    70-79:Garde C
    60-69:Grade D
    below 60:Grade F 
*/

#include <stdio.h>
int main() {
    int mark,p;
    printf("Enter marks in percentage(0-100)\n");
    scanf("%d", &mark);
    p=mark/10;
    switch(p)
    {
        case 10:
        case 9:
             printf("Grade A");
             break;
        case 8:
             printf("Grade B");
             break;
        case 7:
             printf("Grade C");
             break;
        case 6:
             printf("Grade D");
             break;
        
        default:
             printf("Grade F");
    }
return 0;
	

}

