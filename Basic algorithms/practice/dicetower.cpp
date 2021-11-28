//https://codeforces.com/problemset/problem/1266/B


#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll x;
		cin>>x;
		//opposite sides of die total=7
		int t=x%14;
		ll d=x/14;
		if(d>=1&&t>=1&&t<=6)
		cout<<"YES\n";
		else cout<<"NO\n";
	}
}
