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
	string s;
	cin>>s;
	ll cntSml=0,cntCurly=0,cntSqr=0,cntPairs=0;
	repu(i,0,s.length())
	{
		if(s[i]=='(')
			cntSml++;
		else if(s[i]=='{')
			cntCurly++;
		else if(s[i]=='[')
			cntSqr++;
		else if(s[i]==')')
		{
			if(cntSml>0)
			{
				cntSml--;
				cntPairs++;
			}
		}else if(s[i]=='}')
		{
			if(cntCurly>0)
			{
				cntCurly--;
				cntPairs++;
			}
		}else if(s[i]==']')
		{
			if(cntSqr>0)
			{
				cntSqr--;
				cntPairs++;
			}
		}
	}
	cout<<cntPairs;
}
