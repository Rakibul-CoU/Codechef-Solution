#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, m, i, j, k, l, a[10000];
    cin>>t;
    while(t--)
    {
        l=0;
        cin>>n>>m;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n; i++)
        {
            if(a[i]<l)
                l=a[i];
        }
        cout<<m-l<<endl;
    }
    return 0;
}
