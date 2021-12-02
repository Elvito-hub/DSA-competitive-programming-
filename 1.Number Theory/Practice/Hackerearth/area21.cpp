#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
bool prime[1000001];
void seive()
{
    ll m=1000000;
    memset(prime,true,sizeof(prime));
    prime[0]=prime[1]=false;
    for(ll i=4;i<=m;i+=2)
        prime[i]=false;
    for(ll i=3;i*i<=m;i+=2)
    {
        if(prime[i])
        {
            for(ll j=i*i;j<=m;j+=2*i)
                prime[j]=false;
        }
    }
}
using namespace std;
int main()
{
    fast;seive();
    ll t,n,a,q,l,r;
    ll cnt[1000001];
    memset(cnt,0,sizeof(cnt));
    vector<ll> v;
    cin>>n>>q;
    for(ll i=1;i<=n;i++)
    {
        cin>>a;
        if(prime[a])
            cnt[i]=cnt[i-1]+1;
        else
            cnt[i]=cnt[i-1];
    }
    while(q--)
    {
        cin>>l>>r;
        cout<<cnt[r]-cnt[l-1]<<"\n";
    }

}
































/////////////////////////////Mine has TL issues////////////////////////


//#include<bits/stdc++.h>
//using namespace std;
//int phi(int n){
//	int res=n;
//	for(int i=2;i*i<=n;i++){
//		if(n%i==0){
//			while(n%i==0)
//			n=n/i;
//			
//			res-=res/i;
//		}
//	}
//	if(n>1) res-=res/n;
//	
//	return res;
//}
//int main(){
//	int n,q;
//	cin>>n>>q;
//	int a[n];
//	for(int i=1;i<=n;i++) cin>>a[i];
//	while(q--){
//		int l,r,count=0;
//		cin>>l>>r;
//		for(int i=l;i<=r;i++){
//			if(phi(a[i])==a[i]-1) count++;
//		}
//		cout<<count<<endl;
//	}
//}
