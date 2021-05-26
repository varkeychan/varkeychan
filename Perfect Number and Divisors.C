#include <stdio.h>


  int main()
{
  int N,T;
  int count=0;
  scanf("%d",&T);
  if(T>=1 && T<=10)
  {
  
  
  while(T>0)
  {
    scanf("%d",&N);
    if(N>=1 && N<=100)
    {
    
    for(int i=1;i<N;i++)
    {
      if(N%i==0)
      count += i;
    }
    if(count==N)
    printf("\ntrue");
    else
    printf("\nfalse");
    
    
  }
  T--;
  }
  }
  
  return 0;
}