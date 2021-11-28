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
      
int main()
{
	fastio;
	int T;
	cin>>T;
	while(T--)
	{
		ll n,m;
		cin>>n>>m;
		if(n==1) cout<<"0 \n";
		else if(n==2) cout<<m<<"\n";
		else cout<<2*m<<"\n";
	}
}
