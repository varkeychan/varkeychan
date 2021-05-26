#include <bits/stdc++.h>
using namespace std;

int main()
{
  int X,r,res=0;
  scanf("%d",&X);
  
    while(X!=0)
    {
      r = X % 10;
      res = (res*10)+r;
      X = X/10;
      
    }
    
    printf("%d",res);
  
  return 0;
}