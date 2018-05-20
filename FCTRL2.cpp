#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long int n, i, fact;
    long long int t;
    scanf("%lld", &t);
    for(int j=1; j<=t; j++){
    scanf("%lld", &n);
    fact=1;
    for(i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    printf("%lld\n", fact);
    }
}
