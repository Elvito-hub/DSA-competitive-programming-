#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>
#define pll pair<ll,ll>
#define F first
#define S second
#define MAXn 100001
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
	fastio;
	int n;
	cin>>n;
	int a[n];
	int hash[MAXn]={0};
	repu(i,0,n)
	{
		cin>>a[i];
		hash[a[i]]=1;
	}
	int b[n],mex;
	repu(i,1,MAXn)
	{
		if(hash[i]==0)
		{
			mex= i;
			break;
		}
	}
	repu(i,0,n)
	{
		if(a[i]<mex)
		{
			b[i]=a[i];
		}else
			b[i]=mex;
	}
	repu(i,0,n)
		cout<<b[i]<<" ";
	cout<<endl;
}
