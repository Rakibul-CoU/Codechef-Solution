#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n, m, k;
		scanf("%d %d %d",&n, &m, &k);
		if( n == m ) printf("0");
		else if ( n > m )
		{
			if ( n <= m + k ) printf("0");
			else printf("%d", n-m-k);
		}
		else
		{
			if ( m <= n + k ) printf("0");
			else printf("%d", m-n-k );
		}
		printf("\n");
	}
return 0;
}
