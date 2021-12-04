#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pll pair<ll,ll>
#define pb push_back
#define repu(v,s,e) for(ll v=s;v<e;v++)
#define repd(v,s,e) for(ll v=s;v>e;v--)
#define all(a) (a).begin(),a.end()
#define fastio                            \
      ios_base::sync_with_stdio( false ); \
      cin.tie(NULL);                      \
      cout.tie(NULL);                     \
   
      
int main()
{
	fastio;
	ll n;
	cin>>n;
	ll a[n];
	repu(i,0,n) cin>>a[i];
	set<ll> count;
	repu(i,1,(1<<n))
	{
		ll amount=0;
		repu(j,0,n)
		{
			if((1<<j)&i)
			{
				amount+=a[j];
			}
		}
		if(amount%2==0)count.insert(amount);
	}
	cout<<count.size()<<endl;
	
}
