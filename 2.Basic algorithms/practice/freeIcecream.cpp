#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int n;
	ll x;
	cin>>n>>x;
	ll d,sum=x,st=0;
	char sign;
	while(n--)
	{
		cin>>sign>>d;
		if(sign=='+') sum+=d;
		else if(sign=='-'&&abs(d)<=sum) sum-=d;
		else if(sign=='-'&&abs(d)>sum) st++;
	}
	cout<<sum<<" "<<st;
}
