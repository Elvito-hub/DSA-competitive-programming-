// https://codeforces.com/contest/1490/problem/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],count=0;
		for(int i=0;i<n;i++)cin>>a[i];
		for(int i=0;i<n-1;i++)
		{
			double small=min(a[i],a[i+1]);
			double big=max(a[i],a[i+1]);
			if(big/small<=2)continue;
			else{
				while(small<big/2*1.0)
				{
					small*=2;
					count++;
				}
			}
		}
		cout<<count<<endl;
	}
}
