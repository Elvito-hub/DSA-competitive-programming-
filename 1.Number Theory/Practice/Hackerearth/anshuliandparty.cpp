#include<bits/stdc++.h>
#define ull unsigned long long
#define mod 1000000007
using namespace std;
ull power(ull x,ull y)
{
ull res = 1;
while(y)
{
if(y&1)
res=((res%mod)*(x%mod))%mod;
y=y>>1;
x=((x%mod)*(x%mod))%mod;
}
return res;
}
int main()
{
int t;
cin>>t;
while(t--)
{
ull x,y,ans;
cin>>x>>y;
ans=power(x,y);
cout<<ans%mod<<"\n";
}
}


