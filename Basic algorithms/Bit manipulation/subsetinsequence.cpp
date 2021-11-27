//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/nobita-in-trouble-2-5ce82e3d/discussion/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pll pair<ll,ll>   
ll power(ll x,ll n)
{
	ll res=1;
	while(n>0)
	{
		if(n&1) res*=x;
		
		n=n>>1;
		x=x*x;
	}
	return res;
}
int main()
{
ll t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    ll d=n,len=0;
    while(d!=0)
    {
        if(d%2==1)
            len++;
        d/=2;
    }
    cout<<len<<endl;
    for(ll i=1;i<=40;i++)
    {
        if(((ll)1<<(i-1))&n)
        {
            cout<<power(3,i-1)<<" ";
        }
    }
    cout<<endl;
}
}
