#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,k,steps;
		cin>>n>>k;
		if(k>n) steps=k-n;
		else if(k==n) steps=0;
		else{
			if(n%2==0&&k%2==0) steps=0;
			else if(n%2==0&&k%2!=0) steps=1;
			else if(n%2!=0&&k%2!=0) steps=0;
			else if(n%2!=0&&k%2==0) steps=1;
		}
		cout<<steps<<endl;
	}
}
