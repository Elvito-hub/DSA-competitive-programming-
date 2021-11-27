//https://codeforces.com/contest/1485/problem/A

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
		ll A,B,a,b,res,i,ans;
		cin>>A>>B;
		if(!A){
			cout<<0<<endl;
		}
		else{
		res=A+3;
		for(i=(B<2?2-B:0);i<res;++i)
		{
			b=B+i;
			a=A;
			ans=i;
			while(a)
			{
				a/=b;
				++ans;
			}
			if(ans<res) res=ans;
		}
		cout<<res<<endl;
	}
	}
}
