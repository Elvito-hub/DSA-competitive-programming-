#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	return a==0?b:gcd(b%a,a);
}
bool isPossible(int a,int b,int c){
	return(c%gcd(a,b)==0);
}
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	isPossible(a,b,c)? cout<<"Possible": cout<<"Impossible";
}
