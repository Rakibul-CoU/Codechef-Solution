#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i;
    scanf("%d",&t);
    int a[t];
    for(i=0; i<t; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<t; i++)
    {
        if(a[i]>=10)
        {


            printf("-1\n");
        }
        else
        {

            printf("What an obedient servant you are!\n");
        }
    }
}
