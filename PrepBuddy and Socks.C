#include <stdio.h>

int main()
{
  int T,N;
  scanf("%d",&T);
  
  while(T>0)
  {
    scanf("%d",&N);
    if(T==1)
    {
      printf("%d\n",(N*2)-1);
    }
    else
    printf("%d\n",(N*2));
    
    T--;
  }
  
  return 0;
}