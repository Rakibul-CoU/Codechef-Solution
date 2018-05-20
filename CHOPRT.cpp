#include<stdio.h>
using namespace std;
int main()
{
    long long int n, i, j, a, b;
    scanf("%lld", &n);
    while(n--)
    {
        scanf("%lld %lld", &a, &b);
        if(a>b)
            printf(">\n");
        else if(a<b)
            printf("<\n");
        else if(a==b)
            printf("=\n");
    }
    return 0;
}
