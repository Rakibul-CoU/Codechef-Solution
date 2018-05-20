#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,i,n,d;
  scanf("%d",&t);
  while(t--)
  {
      scanf("%d %d",&d,&n);
      for(i=1;i<=d;i++)
      {
          n=(n*(n+1))/2;
      }
      printf("%d\n",n);
  }
    return 0;
}
