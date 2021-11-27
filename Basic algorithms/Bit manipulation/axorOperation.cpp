//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/strange-xor-2-fc8ad535/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pll pair<ll,ll>
#define pb push_back
#define all(a) (a).begin(),a.end()
#define fastio                            \
      ios_base::sync_with_stdio( false ); \
      cin.tie(NULL);                      \
      cout.tie(NULL);                     \
      
ll solve(vector<ll> s,ll n)
{
	ll	ans=0;
	for(ll mask=0;mask<=30;mask++)
	{
		ll cont_bits=0;
		for(ll i=0;i<n;i++)
		{
			if((1LL<<mask)&s[i])cont_bits++;
		}
		if(cont_bits%2) ans+=(1LL<<mask);
	}
	return ans;
}
int main()
{
	fastio;
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		vector<ll> s(n,0);
		for(int i=0;i<n;i++)
			{
			cin>>s[i];
		 	}
		ll k=solve(s,n);
	vector<ll> temp;
	for(auto it:s)
	{
		ll	val=it^k;
		temp.pb(val);
	}
	sort(all(temp));
	sort(all(s));
	for(ll	i=0;i<n;i++)
	{
		if(temp[i]!=s[i])
		{
			cout<<"-1"<<endl;
			goto h;
		}
	}
	cout<<k<<endl;
	h:;
}
}
