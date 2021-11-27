#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int a,long long int b){
	return a%b==0?b:gcd(b,a%b);
}
long long int power(long long int x,long long int y,long long int m){
	 long long int res=1;
	x=x%m;
	while(y>0){
		if(y & 1) res=(res*x)%m;
		
		y=y>>1;
		x=(x*x)%m;
	}
	return res%m;
}
int main(){
	long long n,f=1,m=1000000007;
	cin>>n;
	long long a[n];
	for(int i=0;i<n;i++){
	cin>>a[i];
	f=(f%m*a[i]%m)%m;
}
	int g=a[0];
	for(int i=1;i<n;i++) g=gcd(g,a[i]);
	cout<<power(f,g,m);
}
