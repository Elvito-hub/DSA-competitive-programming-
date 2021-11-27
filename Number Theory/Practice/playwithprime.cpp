#include<bits/stdc++.h>
using namespace std;
const int MX=1e6+5;
int spf[MX];
void sieve()
{
	spf[1]=1;
	for(int i=2;i<MX;i++) spf[i]=i;
	for(int i=4;i<MX;i+=2) spf[i]=2;
	for(int i=3;i*i<MX;i++)
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
int primeFact(int x){
	int sum=0;
	while(x!=1)
	{
		sum+=spf[x];
		x/=spf[x];
	}
	return sum;
}
int main()
{
	sieve();
	int T;
	cin>>T;
	while(T--)
	{
		int n,x;
		cin>>n;
		int factSum[n];
		for(int i=0;i<n;i++)
		{
			cin>>x;
			factSum[i]= primeFact(x); 
		}
		sort(factSum,factSum+n);
		for(int i=n-1;i>=0;i--)
		{
			cout<<factSum[i]<<" ";
		}
		cout<<endl;
	}
}
