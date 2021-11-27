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
	int t;
	cin>>t;
	while(t--)
	{
		unsigned short N,m; char c; cin>>N>>m>>c;
		unsigned short temp1,temp2,res;
		if(c=='L')
		{
			temp1=N>>(16-m);
			temp2=N<<m;
			res=temp1|temp2;
		}else{
			temp1=N<<(16-m);
			temp2=N>>m;
			res=temp1|temp2;	
		}
		cout<<res<<endl;
	}
}
