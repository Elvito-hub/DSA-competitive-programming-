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
      
int solve(string s1,string s2)
{
	if(s1==s2) return 1;
	if(s1.length()%2 || s2.length()%2)
		return 0;
	map<char,int> mp1,mp2;
	repu(i,0,s1.length())
	{
		mp1[s1[i]]++;
		mp2[s2[i]]++;
	}
	int l1=s1.length();
	int l2=s2.length();
	if(mp1!=mp2)
		return 0;
	else
		return
		 ((solve(s1.substr(0,l1/2),s2.substr(0,l2/2)))
		 &&(solve(s1.substr(l1/2,l1/2),s2.substr(l2/2,l2/2))))||
		 ((solve(s1.substr(0,l1/2),s2.substr(l2/2,l2/2))) &&
		 (solve(s1.substr(l1/2,l1/2),s2.substr(0,l2/2))));
		 
		return 0;	
}
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	if(solve(s1,s2))
		cout<<"YES\n";
	else
		cout<<"NO\n";

}
