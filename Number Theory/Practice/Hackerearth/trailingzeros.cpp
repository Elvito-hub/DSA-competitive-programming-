#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
int main()
{
	fast;
	ll T,n;
	cin>>T;
	while(T--)
	{
		ll zerocount=0;
		cin>>n;
		for(ll i=5;n/i>=1;i*=5)
		   zerocount+=n/i;
		   
		cout<<zerocount<<endl;
	}
	
}
