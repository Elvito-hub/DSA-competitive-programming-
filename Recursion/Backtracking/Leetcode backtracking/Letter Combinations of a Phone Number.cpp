#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
vector<string> res;
map<int,vector<char>> mp;

void solve(string n,int pos=0,string s="")
{
	if(pos==n.size())
	{
		if(s!="")res.pb(s);
		s.clear();
		return;
	}
	int num=n[pos]-'0';
	for(auto i:mp[num])
	{
		solve(n,pos+1,s+i);
	}
}
int main()
{
	fastio;
	mp[0]={'0'};
	mp[1]={'0'};
	mp[2]={'a','b','c'};
	mp[3]={'d','e','f'};
	mp[4]={'g','h','i'};
	mp[5]={'j','k','l'};
	mp[6]={'m','n','o'};
	mp[7]={'p','q','r','s'};
	mp[8]={'t','u','v'};
	mp[9]={'w','x','y','z'};
	string n;
	cin>>n;
	int pos=0;
	string s;
	solve(n,pos,s);
	for(auto i:res)
		cout<<i<<endl;
}
