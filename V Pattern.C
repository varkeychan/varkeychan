#include <bits/stdc++.h>
using namespace std;

int main()
{
  char ch;
  int i,j;
  scanf("%c",&ch);
  
  if(ch=='V')
  {
  
  for(i=1;i<=5;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf("%d",j);
    }
    
    for(j=i*2; j<10; j++)
    {
      printf(" ");
    }
    
    for(j=i;j>=1;j--)
    {
      printf("%d",j);
    }
    
    printf("\n");
    
  }
  }
  
  return 0;
}