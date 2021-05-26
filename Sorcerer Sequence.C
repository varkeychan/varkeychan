#include <stdio.h>
#include <math.h>

int main()
{
  int T,N;
  scanf("%d",&T);
  
  if(T>=1 && T<=100)
  {
    while(T>0)
    {
      scanf("%d",&N);
      if(N>=1 && N<=100)
      {
        while(N>=1)
        {
        if(N%2==0)
        { printf("%d ",N);
          if(N==1) break;
          N=pow(N,0.5);
        }
        else
        { printf("%d ",N);
          if(N==1) break;
          N=pow(N,1.5);
        }
        }
      }
      printf("\n");
      T--;
    }
  }
  return 0;
}