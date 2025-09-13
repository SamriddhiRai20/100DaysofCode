/*
WAP to find profit or loss percentage given cost price and selling price.
*/

#include <stdio.h>
int main() {
    float cp,sp;
    printf("Enter the selling price and cost price:\n");
    scanf("%f %f", &sp, &cp);
    float profitp=(((sp-cp)/cp)*100);
    float lossp=(((cp-sp)/cp)*100);
    if(sp>cp)
    {
        printf("Profit Percentage is: %.2f", profitp);
    }
    else
    {
        printf("Loss Percentage is: %.2f", lossp);
    }
    
return 0;
    
	

}

