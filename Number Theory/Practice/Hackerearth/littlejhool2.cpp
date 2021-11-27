#include <bits/stdc++.h>
 
using namespace std;
typedef long long int ll;
typedef vector<ll> vi;
#define present(s,x) s.find(x)!=s.end()
#define all(v) v.begin(),v.end()
#define up(i,l,r) for(int i=l;i<r;i++)
#define ptr(v) for(auto i=v.begin();i!=v.end();i++)
#define fast ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
 
ll x,y;
int extended_Euclid(ll a,ll b){
if(b==0){
x=1,y=0;
return a;
}
int gcd=extended_Euclid(b,a%b);
ll temp =x;
x=y;
y=temp-(a/b)*y;
return gcd;
}
int main() {
int t;cin>>t;
while(t--){
ll a,d,p,ans;cin>>a>>d>>p;
a%=p;d%=p;
if(!a and !d) ans=0;
else{
int gcd= extended_Euclid(p,d);
ans=-1;
if(a%gcd==0){

y=(p-y)%p;
	cout<<y<<endl;
ans=(a*y)%p;
}
}
cout<<ans<<"\n";
}
}
