#include<bits/stdc++.h>
using namespace std;
 int n, i, j, c, l;
int main()
{
    char st[100000];
    scanf("%d", &n);
    for(i=1; i<n; i++)
    {
        c=0;
        scanf("%s", st);
        l=strlen(st);
        for(j=0; j<l; j++)
        {
            if(st[j]=='4')
                c++;
        }
        printf("%d\n", c);
    }
}
