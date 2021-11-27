//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/mystery-30/


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
      
      
int count_one(ll n)
{
	int count=0;
	while(n)
	{
		n=n&(n-1);
		count++;
	}
	return count;
}
int main()
{
	fastio;
	ll n;
	while(cin>>n)
	cout<<count_one(n)<<"\n";
}
