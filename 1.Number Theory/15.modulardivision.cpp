#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b,int *x,int *y);

int modInverse(int b,int m){
	int x,y;
	int g=gcd(b,m,&x,&y);
	if(g!=1)
	   return -1;
	//m is added to handle negative x;
	return (x%m+m)%m;
}
void modDivide(int a,int b,int m){
	a=a%m;
	int inv = modInverse(b,m);
	if(inv==-1)
	    cout<<"Division not defined";
	else
	    cout<<"Result of division is : "<<(inv*a)%m;
}
int gcd(int a,int b,int *x, int *y){
	if(a==0){
		*x=0;
		*y=1;
		return b;
	}
	int x1,y1;
	int g= gcd(b%a,a,&x1,&y1);
	*x=y1-(b/a)*x1;
	*y=x1;
	return g;
}
int main(){
	int a=3,b=4,m=5;
	modDivide(a,b,m);
	return 0;
}
