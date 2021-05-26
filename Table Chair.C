#include <stdio.h>
long long int min(long long int a,long long int b)
{
  if(a<b)
    return a;
    else
    return b;
}
int main()
{
  int t;
  long long r1,r2,r3,m;
  scanf("%d",&t);
  while(t>0)
  {
    scanf("%lld %lld %lld %d", &m, &r1, &r2, &r3);
    m%=4;
    
    if(m==0)
    printf("\n0");
    else if(m==1)
    printf("\n%lld",min(r3,min((r1+r1+r1),(r2+r1))));
    else if(m==2)
    printf("\n%lld",min(r2,min((r1+r1),(r3+r3))));
    else
     printf("\n%lld",min(r1,min((r2+r3),(r3+r3+r3))));
     t--;
  }
  return 0;
}