#include<bits/stdc++.h>
#include<string.h>
int main()
{
    int f,t,mid,len, n;
    char arr[1010];
    int left[1010],right[1010];
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        f=0;
        scanf("%s",arr);
        memset(left,0,sizeof(left));
        memset(right,0,sizeof(right));
        len=strlen(arr);
        for(int i=0;i<len/2;i++)
            left[arr[i]]++;
        for(int i=(len+1)/2;i<len;i++)
            right[arr[i]]++;
        for(int i=0;i<strlen(arr);i++)
        {
            if(left[arr[i]]!=right[arr[i]])
                f++;
            break;
        }
        if(f==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
