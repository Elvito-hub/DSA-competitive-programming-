#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int MX=1e6+5;
bitset<MX> isPrime;
void sieve(){
	isPrime[2]=1;
	for(int i=3;i<=MX;i+=2) isPrime[i]=1;
	
	for(int p=3;p*p<=MX;p+=2){
		if(isPrime[p]){
			for(int i=p*p;i<=MX;i+=p)
			isPrime[i]=0; 
		}
	}
}
int main(){
	sieve();
	ll T;
	cin>>T;
	while(T--){
		int n,k;
		cin>>n>>k;
		ll sum=0,cnt=0;
		while(n--){
			int num;
			cin>>num;
			if(isPrime[num]){
				cnt++;
				if(cnt%k==0) sum+=num;
			}
		}
		cout<<sum<<endl;
	}
	
}
