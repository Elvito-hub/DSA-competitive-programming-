//https://codeforces.com/contest/1493/problem/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		double n,k;
		cin>>n>>k;
		double ans=(n-k)+(k-ceil(k/2.0));
		cout<<ans<<"\n";
		for(int i=k+1;i<=n;i++) cout<<i<<" ";
		for(double i=ceil(k/2.0);i<k;i++) cout<<i<<" ";
		cout<<"\n";
	}
}

