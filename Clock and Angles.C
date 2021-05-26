#include <stdio.h>

int main()
{
  int T,a,x,y;
  scanf("%d",&T);
  if(T>=1 && T<=5)
  {
    while(T>0)
    {
      scanf("%d%d",&x,&y);
      a=((30*x)-((11*y)/2));
      if(a<0)
      {
      a=a*-1;
      }
      printf("\n%d",a);
      T--;
    }
  }
  
  return 0;
}