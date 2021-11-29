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
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		string a,b;
		cin>>a>>b;
		array<int,27> have{},need{};
		for(auto c:a)
			have[c-'a']++;
		for(auto c:b)
			need[c-'a']++;
		bool bad=false;
		int i;
		for(i=0;i<26;i++)
		{
			if(have[i]<need[i]||(have[i]-=need[i])%k)
				bad=true;
			have[i+1]+=have[i];
		}
		cout<<(bad?"No":"Yes") <<"\n";
	}
}
