#include<bits/stdc++.h>
using namespace std;
int main()
{
    long num, temp, digit, sum=0, n;
    scanf("%ld", &n);
    while(n--){
    scanf("%ld", &num);
    sum=0;
    temp = num;
    while (num > 0)
    {
        digit = num % 10;
        sum  = sum + digit;
        num /= 10;
    }
    printf("%ld\n",sum);}
    return 0;

}
