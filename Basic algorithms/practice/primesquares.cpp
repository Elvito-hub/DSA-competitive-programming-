#include<bits/stdc++.h>
using namespace std;
const int MX=1e6+1;
bool isPrime[MX];
void sieve()
{
	memset(isPrime,true,MX);
	isPrime[1]=0;
	for(int i=2;i*i<MX;i++)
	{
		if(isPrime[i])
		{
			for(int j=i*i;j<MX;j+=i) isPrime[j]=0;
		}
	}
}
int main()
{
	sieve();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int rem,i=1,temp;
		if(isPrime[n]) temp=n-1;
		else temp=n;
		int cov=temp*(n-1);
		if(n==3) cov=1,temp=1;
		bool found=false;
		while(!found)
		{
			if(!isPrime[i]&&isPrime[i+cov])
			{
				rem=i;
				found=1;
			}
			i++;
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(i==j) cout<<rem<<" ";
				else cout<<temp<<" ";
			}
			cout<<endl;
		}
	}
}
