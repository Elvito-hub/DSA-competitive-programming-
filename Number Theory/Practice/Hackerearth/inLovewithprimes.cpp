#include<bits/stdc++.h>
using namespace std;
const int MX=1e5 +5;
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
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++){
		int found=0;
		cin>>n;
		for(int j=2;j<=n;j++){
			if(isPrime[j]&&isPrime[n-j]){
				found=1;
				break;
			}
		}
		if(found) cout<<"Deepa"<<endl;
		else cout<<"Arjit"<<endl;
	}
}
