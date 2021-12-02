#include<bits/stdc++.h>
using namespace std;
const int MX=1e6+1;
int primeFactors[MX];
int totent[MX];
void divisors()
{
	for(int i=2;i<MX;i++)
	{
		for(int j=1;i*j<MX;j++)
		primeFactors[i*j]++;
	}
}
int phi(int n)
{
	int res=n;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			while(n%i==0) n/=i;
			
			res-=res/i;
		}
	}
	if(n>1) res-=res/n;
	return res;
}

int main()
{
	divisors();
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int res=n-(phi(n)+primeFactors[n]);
		cout<<res<<endl;
	}
	
}
