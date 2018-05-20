#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, n, fact, i, j;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &a);
        fact=1;
        for(i=1; i<=a; i++)
        {
            fact=fact*i;
        }
        printf("%d\n", fact);
    }
    return 0;
}
