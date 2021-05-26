#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  float q,p,pr;
  scanf("%d",&N);
  if(N>=1 && N<=10)
  {
    while(N>0)
    {
      scanf("%f%f",&q,&p);
      
      if((q>=1 && q<=10000) && (p>=1 && p<=10000))
      {
       if(q>100)
       {
       pr=(p-(0.2*p))*q;
       printf("\n%0.1f",pr);
       }
       else
       {
       pr=p*q;
       printf("\n%0.1f",pr);
       }
      }
      N--;
    }
  }
  
  return 0;
}