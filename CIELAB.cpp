#include<bits/stdc++.h>
using namespace std;
int main()
{
int A,B,result,temp;
temp=0;
result = 0;
scanf("%d%d",&A,&B);
result=A-B;
if(result==0)
{
printf("%d",result+1);
}
else
{
if((result>0)&&(result<9))
{
printf("%d",result+1);
}
else if(result==9)
printf("%d",result-1);
else
{
temp = result%10;
if(temp==9)
printf("%d",result-1);
else
printf("%d",result+1);
}
}
return 0;
}
