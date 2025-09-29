//WAP to print all the prime numbers from 1 to n.

#include <stdio.h>

int main() 
{
  int n,i,num,count;
  printf("Enter a positive number n:\n");
  scanf("%d", &n);
  printf("All the Prime Numbers from 1 to %d are:\n", n);
  
  
  for(num=2;num<=n;num++)
  {
      count=0;
      for(i=2;i <= num / 2;i++)
      {
          if(num % i == 0)
          {
          count++;
          break;
          }
      }
  
  
      if(count == 0)
      {
      printf("%d ", num);
      }
  }
  
  printf("\n");
return 0;
}

