#include<bits/stdc++.h>
using namespace std;
const int MX= 1e6 +5;
bool isPrime[MX+1];
vector<int> primes;
void sieve(){
	memset(isPrime,true,sizeof(isPrime));
	for(int p=2;p*p<=MX;p++){
		if(isPrime[p]){
			for(int i=p*p;i<=MX;i+=p){
				isPrime[i]=false;
			}
		}
	}
	for(int i=2;i<=MX;i++){
		if(isPrime[i]) primes.push_back(i);
	}
}
	int digitsSum(int num){
		int sum=0;
		while(num!=0){
			sum+=(num%10);
			num/=10;
		}
		return sum;
	}
	int main(){
		sieve();
		int t;
		cin>>t;
		while(t--){
			int l,r;
			cin>>l>>r;
			int l_bound= lower_bound(primes.begin(),primes.end(),l)-primes.begin();
			int u_bound= upper_bound(primes.begin(),primes.end(),r)-primes.begin();
			int cnt=0;
			for(int i=l_bound;i<u_bound;i++){
				int sum=digitsSum(primes[i]);
				if(isPrime[sum]) cnt++;
			}
			cout<<cnt<<endl;
		}
	}

