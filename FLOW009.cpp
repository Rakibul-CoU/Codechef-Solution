#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n, i, j, k, l, m, a, b;
    scanf("%lf", &n);
    while(n--)
    {
        scanf("%lf %lf", &a, &b);
        if(a<1000)
            printf("%.6lf\n", a*b);
        else
        {
            m=a*b;
            k=(m*10)/100;
            l=m-k;
            printf("%.6lf\n", l);
        }
    }
    return 0;
}
