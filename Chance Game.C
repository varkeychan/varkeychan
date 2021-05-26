#include <stdio.h>

int comp(int x,int y)
{
  if(x<y)
  return y;
  else
  return x;
}

int main()
{
  int t,p,a,b;
  scanf("%d",&t);
  
  while(t>0)
  {
    scanf("%d %d %d",&p, &a, &b);
    printf("%d\n",p-comp(a,b));

    t--;
  }
  
  return 0;
}