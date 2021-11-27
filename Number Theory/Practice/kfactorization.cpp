#include<bits/stdc++.h>
#define pb push_back 
using namespace std;
const int MX=1e6+1;
int spf[MX];
int sieve()
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
vector<int> factors(int n)
{
	vector<int> res;
	while(n!=1)
	{
		res.pb(spf[n]);
		n/=spf[n];
	}
	return res;
}
int main()
{
	sieve();
	int n,k;
	cin>>n>>k;
	vector<int> f=factors(n);
	if(f.size()<k) cout<<-1<<"\n";
	else{
		int d=1;
		for(int i=0;i<(f.size()-k+1);i++)
		{
			d*=f[i];
		}
		cout<<d<<" ";
		for(int i=(f.size()-k+1);i<f.size();i++) cout<<f[i]<<" ";
		
		cout<<endl;
	}
}
