#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T, i, numb;
    unsigned int amm;
    int arr[1001];
    scanf(" %d", &T);
    for(i=0; i<T; i++)
    {
        numb=0;
        scanf(" %d", &amm);
        if(amm/100 >=1){
            numb = numb + amm/100;
            amm = amm % 100;
        }
        if(amm/50 >=1){
            numb = numb + amm/50;
            amm = amm % 50;
        }
        if(amm/10 >=1){
            numb = numb + amm/10;
            amm = amm % 10;
        }
        if(amm/5 >=1){
            numb = numb + amm/5;
            amm = amm % 5;
        }
        if(amm/2 >=1){
            numb = numb + amm/2;
            amm = amm % 2;
        }
        if(amm) numb = numb + amm;
        arr[i]= numb;
    }
    for(i=0; i<T; i++)
    {
        printf("\n%d", arr[i]);
    }
    return 0;
}
