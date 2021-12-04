//https://codeforces.com/contest/1487/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pll pair<ll,ll>
#define pb push_back
#define all(a) (a).begin(),a.end()      
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,ans=0;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i=0;i<n;i++)
		  if(a[i]!=a[0]) ans++;
		  
		cout<<ans<<endl;
	}
}
