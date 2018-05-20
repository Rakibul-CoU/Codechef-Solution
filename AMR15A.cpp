#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, k=0, c=0, l, a[110];
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i]%2==0)
            k++;
        else
            c++;
    }
    if(k>c)
        printf("READY FOR BATTLE\n");
    else
        printf("NOT READY\n");
    return 0;
}
