#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, n, i, j, k, l, flag=0;
    scanf("%lld", &t);
    while(t--)
    {
        flag=0;
        scanf("%lld", &n);
    for(i=2; i*i<n; i++)
    {
      if(n%i==0)
        {
            flag=1;
        }
    }
    if (flag==0)
        printf("yes\n");
    else
        printf("no\n");
    }
    return 0;
}
