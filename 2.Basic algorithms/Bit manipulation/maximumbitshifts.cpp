#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pll pair<ll,ll>
#define pb push_back
#define repu(v,s,e) for(ll v=s;v<e;v++)
#define repd(v,s,e) for(ll v=s;v>e;v--)
#define all(a) (a).begin(),a.end()
#define fastio                            \
      ios_base::sync_with_stdio( false ); \
      cin.tie(NULL);                      \
      cout.tie(NULL);                     \
      
int main()
{
	fastio;
 int t;
 cin>>t;
 while(t--)
 {
 ll num, cnt=0, ans=0, maxbit=0;
 cin>>num;
 maxbit = log2(num);
 while(num)
 {
 if(num&1)
 cnt++;
 num>>=1;
 }
 while(cnt--)
 {
 ans |= (1ULL <<(maxbit));
 maxbit--;
 }
 cout<<ans<<" ";
 }
}
