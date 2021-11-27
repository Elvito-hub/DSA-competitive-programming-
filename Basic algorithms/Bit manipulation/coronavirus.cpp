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
      
long largest_power(long N)
    {
        //changing all right side bits to 1.
        N = N| (N>>1);
        N = N| (N>>2);
        N = N| (N>>4);
        N = N| (N>>8);


    //as now the number is 2 * x-1, where x is required answer, so adding 1 and dividing it by 2
                return (N+1)>>1;

    }
      
int main()
{
	fastio;
	ll n;
	cin>>n;
	vector<int> res;
	cout<<"YES"<<endl;
	while(n)
	{
		int x=	largest_power(n);
		res.pb(log(x)/log(2));
		n=n-x;
	}
	cout<<res.size()<<endl;
	sort(all(res));
	for(auto it:res)
		cout<<it<<" ";
}
