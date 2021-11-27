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
      
int main()
{
	fastio;

    int t; cin>>t;

    while(t--)

    {
        ll n,c01,c10; 
		cin>>n>>c01>>c10;

        ll freq[2][2]={0};

        for(int i=0 ; i<n ; i++)

        {

            int x; cin>>x;

            if(i&1) freq[1][x]++;

            else freq[0][x]++;

        }

        ll c1 = freq[0][0]*c01 + freq[1][1]*c10;

        ll c2 = freq[0][1]*c10 + freq[1][0]*c01;

        cout<<min(c1,c2)<<endl;

    }

    return 0;

}
