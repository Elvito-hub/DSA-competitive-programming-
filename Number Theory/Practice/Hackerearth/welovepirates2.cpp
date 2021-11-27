#include<bits/stdc++.h>
using namespace std;
const int MX=1e6+5;
bitset<MX> isPrime;
vector<int> primes;
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
	for(int i=0;i<MX;i++){
		if(isPrime[i])
		primes.push_back(i);
	}
}
	int main(){
		sieve();
		int T;
		cin>>T;
		while(T--){
			int n,cnt=0;
			cin>>n;
			for(int i=0;i<primes.size()-1,primes[i]<=n;i++){
				if(isPrime[primes[i]+primes[i+1]]){
					cnt++;
				}
			}
			cout<<cnt<<endl;
		}
	}

