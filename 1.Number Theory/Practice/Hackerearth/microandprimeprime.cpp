#include<bits/stdc++.h>
using namespace std;
const int MX=1e6+5;
bitset<MX> isPrime;
int sprimes[1000005];
void sieve(){
	isPrime[1]=0;
	isPrime[2]=1;
	for(int i=3;i<=MX;i+=2) isPrime[i]=1;
	for(int p=3;p*p<=MX;p++){
		if(isPrime[p]){
			for(int i=p*p;i<=MX;i+=p) isPrime[i]=0;
		}
	}
	int cnt=0;
	for(int i=1;i<=MX;i++){
		if(isPrime[i]){
			cnt++;
		}
		if(isPrime[cnt]){
			sprimes[i]=1;
		}else{
			sprimes[i]=0;
		}
	}
	//for every index add prime prime numbers
	for(int i=1;i<=MX;i++)
	sprimes[i]+=sprimes[i-1];
}

int main(){
	sieve();
	int T;
	cin>>T;
	while(T--){
		int l,r;
		cin>>l>>r;
		int cnt=sprimes[r]-sprimes[l-1];
		cout<<cnt<<endl;
	}
	
}
