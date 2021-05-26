#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N,t,c;
  int res=0;
  scanf("%d",&N);
  
  while(N!=0)
  {
    scanf("%d %d",&t,&c);
    if(c-t>=2)
    res = res +1;
    N--;
  }
  
  
  printf("%d",res);
  
  return 0;
}