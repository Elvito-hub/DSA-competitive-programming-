#include<bits/stdc++.h>
using namespace std;
const int MX=1e9+7;
int gcd(int a,int b){
	return a%b==0?b:gcd(b,a%b);
}
int func(int n){
	int sum=0;
	for(int i=1;i<=n;i++){
		sum+=gcd(i,n)%MX;
	}
	return sum%MX;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=1;i<=n;i++) cin>>a[i];
	int q;
	cin>>q;
	while(q--){
		char qt;
		int x,y,res=0;
		cin>>qt>>x>>y;
		if(qt=='C'){
			while(x<=y){
				res+=(func(a[x]))%MX;
				x++;
			}
			cout<<res<<endl;
		}else if(qt=='U'){
			a[x]=y;
		}
	}
}
