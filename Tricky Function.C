#include <stdio.h>

int fun(int a)
{
  if(a==1)
  return a;
  else if(a%2==0)
  fun(a/2);
  else
  fun(a-1);
}

int main()
{
  int t,n;
  scanf("%d",&t);
  
  
  while(t>0)
  {
    scanf("%d",&n);
    if(n==0 || n==1)
    printf("\n%d",n);
    else if(n%2==0)
    printf("\n%d",fun(n/2));
    else
    printf("\n%d",fun(n-1)+1);
    
    t--;
  }
  
  return 0;
}