#include<bits/stdc++.h>
using namespace std;
const int MX=1e6+5;
bitset<MX> isPrime;
void sieve(){
	isPrime[2]=1;
	for(int i=3;i<=MX;i+=2) isPrime[i]=1;
	for(int p=3;p*p<=MX;p++){
		if(isPrime[p]){
			for(int i=p*p;i<=MX;i+=p) isPrime[i]=0;
		}
	}
}
int main(){
	sieve();
	int n;
	cin>>n;
	for(int i=floor(n/2);i<=n;i++){
		if(isPrime[i]&&isPrime[n-i]){
			cout<<n-i<<" "<<i;
			return 0;
		}
	}
}
