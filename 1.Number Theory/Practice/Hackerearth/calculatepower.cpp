#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll power(ll x,ll y,ll m){
	ll res=1;
	x=x%m;
	while(y>0){
	  if(y & 1) res=(res*x)%m;
	  
	  y=y>>1;
	  x=(x*x)%m;
}
return res%m;
	  
	
}
int main(){
	ll a,b;
	ll m=1000000007;
	cin>>a>>b;
	cout<<power(a,b,m);
}
