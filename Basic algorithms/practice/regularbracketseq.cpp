//https://codeforces.com/problemset/problem/1469/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pll pair<ll,ll>
#define pb push_back
#define all(a) (a).begin(),a.end()
      
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string s;
		cin>>s;
		if(s[0]==')'||s[s.length()-1]=='('||s.size()%2!=0)
		{
			cout<<"NO"<<endl;
			continue;
		}
        cout<<"YES\n";
	}
}
