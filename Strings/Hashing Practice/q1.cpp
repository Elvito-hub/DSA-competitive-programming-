#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>
#define pll pair<ll,ll>
#define F first
#define S second
#define pb push_back
#define repu(v,s,e) for(ll v=s;v<e;v++)
#define repd(v,s,e) for(ll v=s;v>e;v--)
#define all(a) (a).begin(),a.end()
#define fastio                            \
      ios_base::sync_with_stdio( false ); \
      cin.tie(NULL);                      \
      cout.tie(NULL);                     
      
int main()
{
	fastio;
	ll n;
	cin>>n;
	string s;
	cin>>s;
	ll ans=0;
	map<char,int> mp;
	repu(i,0,2*n-2)
	{
		if(i%2==0)
		{
			mp[s[i]]++;
		}
		else{
			if(mp[s[i]+'a'-'A']<=0)
				ans++;
			else
				mp[s[i]+'a'-'A']--;
		}
	}
	cout<<ans<<endl;
}
