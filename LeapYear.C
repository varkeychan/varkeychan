#include <stdio.h>

int main()
{ 
  int n,T;
 // printf("\nEnter the test class ");
  scanf("%d",&T);
  
  
  while(T>0)
  {
    scanf("%d",&n);
  if(n % 400==0 )
  {
    printf("\nYes");
  }
    
    else if(n % 100==0)
    {
      printf("\nNo");
    }
      
      else if(n % 4 ==0)
      {
        printf("\nYes");
      }
        
        else
          printf("\nNo");
     
  T--;
  }
  
  return 0;
}