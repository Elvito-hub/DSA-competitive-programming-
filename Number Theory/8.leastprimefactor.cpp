#include<bits/stdc++.h>
using namespace std;

void leastPrimeFactor(int n){
	vector<int> least_prime(n+1,0);
	least_prime[1]=1;
	for(int i=2;i<=n;i++){
		if(least_prime[i]==0){
			least_prime[i]=i;
			for(int j=i*i;j<=n;j+=i){
				if(least_prime[j]==0) least_prime[j]=i;
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout<<"Least Prime factor of "<<i<<" : "<<least_prime[i]<<"\n";
	}
}
int main(){
	int n;
	cin>>n;
	leastPrimeFactor(n);
	
}
