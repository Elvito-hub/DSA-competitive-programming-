//https://codeforces.com/problemset/problem/1433/C

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pll pair<ll,ll>
#define pb push_back
#define all(a) (a).begin(),a.end()
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,maxn=0,ind=-1;
		cin>>n;
		ll a[n];
		for(ll i=1;i<=n;i++) 
		{
		cin>>a[i];
		maxn=max(a[i],maxn);
	}
		for(ll i=1;i<=n;i++)
		{
			if(a[i]!=maxn) continue;
			if(i>1&&a[i-1]!=maxn) ind=i;
			if(i<n&&a[i+1]!=maxn) ind=i;
		}
        cout<<ind<<endl;
	}
}
