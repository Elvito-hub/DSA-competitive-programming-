#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int MX= 35e6+5;
typedef vector<ll> 			vi;
bitset<MX> isPrime;

void sieve(){
	isPrime[2]=1;
	for(int i=3;i<=MX;i+=2) isPrime[i]=1;
	
	for(int p=3;p*p<=MX;p++){
		if(isPrime[p]){
			for(int i=p*p;i<=MX;i+=p){
				isPrime[i]=0;
			}
		}
	}
}
int main() {

 
	sieve();
	int cnt=1;
	vi ans(3000000+1,0);
	for(ll i=2;i<MX;i++){
		ans[cnt]=ans[cnt-1];
		if(isPrime[i])
			ans[cnt++]+=i;
	}
 
	int t;cin>>t;
	while(t--){
		ll n;cin>>n;
		cout<<ans[n]<<"\n";
	}
}
