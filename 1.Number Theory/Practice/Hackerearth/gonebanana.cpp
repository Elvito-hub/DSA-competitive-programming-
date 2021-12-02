#include<bits/stdc++.h>
using namespace std;
const int MX=1e6+5;
bitset<MX> isPrime;
void  sieve(){
	isPrime[2]=1;
	for(int i=3;i<=MX;i+=2) isPrime[i]=1;
	
	for(int p=3;p*p<=MX;p+=2){
	if(isPrime[p]){
		for(int i=p*p;i<=MX;i+=p) isPrime[i]=0;
	}	
	}
}
int main(){
	sieve();
	int T,n;
	cin>>T;
	while(T--){
		cin>>n;
		if(n<4){
			cout<<"No"<<endl;
			continue;
		}
		
		if(isPrime[n]){
			cout<<"No"<<endl;
		}else{
			cout<<"Yes"<<endl;
		}
	}
}
