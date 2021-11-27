#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll func(ll a,ll b)
{
	ll res=0;
	if(a%b>=b/2) res=1;  
	res+=a/b;
	return res;
}
int main()
{
	ll T;
	cin>>T;
	while(T--)
	{
		ll n;
		cin>>n;
		ll a[n];
		ll ans=0;
		for(ll i=0;i<n;i++) cin>>a[i];
		for(ll i=0;i<n;i++)
		{
			for(ll j=0;j<n;j++)
			  ans+=func(a[i],a[i]);
		}
		cout<<ans<<endl;
	}
}
