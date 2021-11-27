#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=int(a);i<=int(b);i++)
const int MX= 10005;
bitset<MX> isPrime;
void sieve(){
	isPrime[2]=1;
	for(int i=3;i<=MX;i+=2) isPrime[i]=1;
	
	for(int p=3;p*p<=MX;p++){
		if(isPrime[p]){
			for(int i=p*p;i<=MX;i+=p)
			 isPrime[i]=0;
		}
	}
}
int main(){
	sieve();
	int l,r;
	cin>>l>>r;
	rep(i,l,r){
		if(isPrime[i])
		cout<<i<<" ";
	}
	
}
