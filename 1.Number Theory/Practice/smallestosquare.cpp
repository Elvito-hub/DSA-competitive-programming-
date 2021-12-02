#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mm map<int,int>
const int MX=1e6+1;
int spf[MX];
vector<int> store(MX+1, 1);
void sieve()
{
	spf[1]=1;
	for(int i=2;i<MX;i++) spf[i]=i;
	for(int i=4;i<MX;i+=2) spf[i]=2;
	for(int i=3;i*i<MX;i+=2)
	{
		if(spf[i]==i)
		{
		for(int j=i*i;j<MX;j+=i)
		{
			if(spf[j]==j) spf[j]=i;
		}
	}
	}
}
void primeFact()
{
	for(int i=2;i<=MX;i++)
	{
		int n=i;
		while(spf[n]!=1)
		{
			int cnt=0;
			ll p=spf[n];
			if(p*p>n||p==0) break;
			while(n%p==0)
			{
				n/=p;
				cnt++;
			}
			if(cnt&1) store[i]*=p;
		}
		if(n!=1) store[i]*=n;
	}
}

int main()
{
	sieve();
	primeFact();
	int T;
	cin>>T;
	while(T--)
	{
		ll n;
		cin>>n;
		cout<<store[n]<<endl;
	}
}
