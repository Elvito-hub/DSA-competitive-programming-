#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n=3;
		ll x,sum=0;
		while(n--)
		{
			cin>>x;
			sum+=x;
		}
		cout<<sum/2<<endl;
	}
}
