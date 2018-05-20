#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100000];
    scanf("%s",a);
    int i;
    int b[4]= {0};
    for(i=0; i<strlen(a); i++)
    {
        if(a[i]=='C')
            b[0]++;
        else if(a[i]=='H'&&b[0]>0)
        {
            b[1]++;
            b[0]--;
        }
        else if(a[i]=='E'&&b[1]>0)
        {
            b[2]++;
            b[1]--;
        }
        else if(a[i]=='F'&&b[2]>0)
        {
            b[3]++;
            b[2]--;
        }
    }
    printf("%d",b[3]);
}
