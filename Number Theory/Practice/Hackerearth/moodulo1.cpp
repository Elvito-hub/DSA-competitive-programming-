#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b,int *x,int *y);
int modExp(long long a,unsigned int b,int m){
	int res=1;
	a=a%m;
	while(b>0){
		if(b & 1)
		   res=(res*a)%m;
		b=b>>1;
		a=(a*a)%m;
	}
	return res;
}
int modInverse(int c,int m){
	int x,y;
	if(gcd(c,m,&x,&y)!=1) return -1;
	else{
		return (x%m+m)%m;
	}
	
}
int modDivision(int d,int c,int m){
	d=d%m;
	int inv= modInverse(c,m);
	if(inv==-1) cout<<"Not exist";
	else{
		cout<<(inv*d)%m;
	}
}
int gcd(int a,int b,int *x,int *y){
	if(a==0){
		*x=0;
		*y=1;
		return b;
	}
	int x1,y1;
	int g=gcd(b%a,a,&x1,&y1);
	*x=y1-(b/a)*x1;
	*y=x1;
	return g;
}
int main(){
	int a,b,c,m;
	cin>>a>>b>>c>>m;
	int d=modExp(a,b,m);
	modDivision(d,c,m);
}
