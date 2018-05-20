#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    int a[t],i;
    for (i=0; i<t; i++)
    {
        int q;
        scanf("%d",&q);
        a[i]=(((q-2)/2)*(q/2))/2;
    }
    for (i=0; i<t; i++)
        printf("%d\n",a[i]);
    return 0;
}
