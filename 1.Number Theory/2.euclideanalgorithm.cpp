#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	return a==0?b:gcd(b%a,a);
}
int main(){
	int a,b;
	cin>>a>>b;
	int res=gcd(a,b);
	cout<<"GCD of "<<a<<","<<b<<"= "<<res;
}
