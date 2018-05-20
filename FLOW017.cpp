#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, k, l, c, b=3, a[4];
    scanf("%d", &n);
    while(n--)
    {
        for(i=0; i<b; i++)
        {
            scanf("%d", &a[i]);
        }
                    sort(a, a+b);
        printf("%d\n", a[1]);

    }
    return 0;
}
