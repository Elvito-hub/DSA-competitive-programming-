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
	int T;
	cin>>T;
	while(T--){
		int l,r,count=0;
		cin>>l>>r;
		for(int i=l;i<=r;i++){
			if(i==1) continue;
			if(!isPrime[i]){
				count++;
				i++;
			}
		}
		cout<<count<<endl;
	}
}

//lesson learned circular permutation is (n-1)!
// and (n-1)!%n==0 if and only if n is not a prime number
