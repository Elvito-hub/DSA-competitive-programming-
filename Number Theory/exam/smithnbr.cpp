#include<bits/stdc++.h>
using namespace std;
int sumdigits(int n){
	int sum=0;
	while(n>0){
		sum+=n%10;
		n/=10;
	}
	return sum;
}
int primeFactors(int n){
	int sum=0;
	while(n%2==0){
		sum+=2;
		n/=2;
	}
	for(int i=3;i<=sqrt(n);i+=2){
		while(n%i==0){
			sum+=i;
			n/=i;
		}
	}
	if(n>9) sum+=sumdigits(n);
	else if(n>2) sum+=n;
	return sum;
}
int main(){
	int n;
	cin>>n;
	int digitSum=sumdigits(n);
	int pfsum=primeFactors(n);
	if(digitSum==pfsum){
		cout<<1<<endl;
	}else{
		cout<<0<<endl;
	}
}
