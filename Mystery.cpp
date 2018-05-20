#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, t, i, j;
    cin>>t;
    while(t--)
    {
        j=0;
        cin>>n;
        if(n%2==0)
        {for(i=2; i<=n-2; i+=2)
        {
            if(n%i==0)
                j++;
        }
        cout<<j+2<<endl;}
        else
        {
            for(i=1; i<=n; i+=2)
            {
                if(n%i==0)
                j++;}
        }
        cout<<j<<endl;
    }
    return 0;
}
