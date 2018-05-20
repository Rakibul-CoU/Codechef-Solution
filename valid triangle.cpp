#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, a, b, c;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d %d %d", &a, &b, &c);
        j=a+b;
        if(j<=c)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
