#include<bits/stdc++.h>
#include<string.h>
using namespace std;
    int n, i, j, k;
    char st[100000];
int main()
{
    scanf("%d", &n);
    while(n--)
    {
        scanf("%s", st);
        strrev(st);
        printf("%s\n", st);
    }
    return 0;
}
