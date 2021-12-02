#include<bits/stdc++.h>
const int MX=1e7+9;
long long arr[MX];
using namespace std;
int phi(int n){
	int result=n;
	for(int p=2;p*p<=n;++p){
		if(n%p==0){
			while(n%p==0)
			n/=p;
		result-=result/p;
		}
	}
	if(n>1) result-=result/n;
	return result;
}
int main(){
	int n,k;
	cin>>n>>k;
	while(k--){
		n=phi(n);
	}
	cout<<n;
}
