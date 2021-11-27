#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pll pair<ll,ll>
#define pb push_back
#define all(a) (a).begin(),a.end()
vector<ll> x,y,p;
ll counta(ll n,ll m,int k)
{
	ll count=0;
	for(int i=0;i<k;i++)
	{
		if(x[i]==n&&y[i]==m)
		{
			count+=p[i];
			count=count%1000000009;
		}
	}
	if(n==1||m==1)
	{
	  return 1;
	  cout<<count<<endl;
}
	
	return counta(n-1,m,k)+counta(n,m-1,k);
}
      
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,m,k;
		cin>>n>>m>>k;
		for(int i=0;i<k;i++)
		{
			cin>>x[i]>>y[i]>>p[i];
		}
		counta(n,m,k);
	}
}
