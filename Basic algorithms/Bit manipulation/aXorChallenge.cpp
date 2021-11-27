#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
bool checkIspowerOf2(ll n)
{
	return (n&&!(n&(n-1)));
}
int main()
{
	ll n;
	cin>>n;
	ll x=n;
	bool flag=false;
	while(!flag)
	{
		if(checkIspowerOf2(n)) flag=true;
		n--;
	}
	cout<<(x^n)*n<<endl;
	
}
