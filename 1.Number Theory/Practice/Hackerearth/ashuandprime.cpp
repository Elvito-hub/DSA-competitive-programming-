#include<bits/stdc++.h>
using namespace std;
#define MX 1000001
#define ll unsigned long long
ll spf[MX];
ll ans[MX];
int sieve()
{
	memset(spf,0,sizeof(spf));
	memset(ans,0,sizeof(ans));
	spf[1]=1;
	for(int i=2;i<MX;i++)
	{
		if(spf[i]==0)
		{
			for(int j=i;j<MX;j+=i)
			{
				if(spf[j]==0)
				{
					spf[j]=i;
					ans[i]++;
				}
			}
		}
	}
}
int main()
{
	sieve();
	int T;
	cin>>T;
	while(T--)
	{
		ll n;
		cin>>n;
		cout<<ans[n]<<endl;
	}
}
