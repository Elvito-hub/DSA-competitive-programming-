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
		int n,a,b,i,j,k;
		cin>>n>>a>>b;
		string s;
		for(i=1,j=1,k=0;i<=n,j<=a,k<b;i++,j++,k++)
		{
			s.pb('z'-k);
			if(k==b-1) k=-1;
			if(j==a) j=0;
			if(i==n) break;
		}
		cout<<s<<endl;
	}
}
