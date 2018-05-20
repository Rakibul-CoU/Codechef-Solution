#include<bits/stdc++.h>
using namespace std;
long long int n, i, a[1000000], j, temp;
int main()
{
    scanf("%lld", &n);
    for(i=0; i<n; i++)
    {
        scanf("%lld", &a[i]);
    }
    sort(a, a+n);

    for(i=0; i<n; i++)
    {
        printf("%lld\n", a[i]);
    }
}
