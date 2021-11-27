//https://codeforces.com/contest/1492/problem/A

#include<bits/stdc++.h>
typedef long long int ll;
const ll lnf = 1e18 + 7;
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		ll p;
		ll ans=lnf;
		cin>>p;
		for(int i=0;i<3;i++)
		{
			ll n;
			cin>>n;
			ans=min(ans,((p+n-1)/n)*n-p);
		}
		cout<<ans<<endl;
	}
}
