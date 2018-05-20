#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c, i,j;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d", &a, &b);
        c=a%b;
        printf("%d\n", c);
    }
    return 0;
}
