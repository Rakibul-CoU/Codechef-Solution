#include<bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    int n, firstDigit, lastDigit, digits, t, sum;
     scanf("%d", &t);
     while(t--){
    scanf("%d", &n);
    lastDigit = n % 10;

    digits = (int)log10(n);
    firstDigit = (int)(n / pow(10, digits));

    sum=firstDigit+lastDigit;
    printf("%d\n", sum);
     }

    return 0;
}
