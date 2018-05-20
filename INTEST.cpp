#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i, n, j, k;
    long long int count=0;
    scanf("%lld %lld", &n, &k);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &j);
        if(j%k==0)
            count++;
    }
    printf("%lld", count);
    return 0;
}
