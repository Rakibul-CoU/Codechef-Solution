#include<bits/stdc++.h>
using namespace std;
long long int n, i, j, k, l, a[1000000];
int main()
{
  scanf("%lld", &n);
  while(n--)
  {
      scanf("%lld", &k);
      long long int max=0;
      for(i=0; i<k; i++)
      {
          scanf("%lld", &a[i]);
      }
      for(i=0; i<k; i++)
      {
          for(j=i+1; j<k; j++)
          {
             if((a[i]+a[j])<(a[i+1]+a[j+1]))
                max=a[i]+a[j];
          }
      }
      printf("%lld", max);
  }
}
