//https://codeforces.com/contest/1490/problem/C

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pll pair<ll,ll>
#define pb push_back
#define all(a) (a).begin(),a.end()      
const ll MX= 1e12;
unordered_set<ll> cubes;
void precalc()
{
	for(ll i=1;i*i*i<=MX;i++)
	{
		cubes.insert(i*i*i);
	}
}
int main()
{
	precalc();
	int t;
	cin>>t;
	while(t--)
	{
		ll x;
		bool found=false;
		cin>>x;
		for(ll i=1;i*i*i<=x;i++)
		{
			if(cubes.count(x-i*i*i)){
				found=true;
				cout<<"YES \n";
				break;
			}
		}
		if(!found) cout<<"NO \n";
	}
}
