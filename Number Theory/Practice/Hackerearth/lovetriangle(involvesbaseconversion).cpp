#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int sum=0;
	while(n>0){
		if(n/10!=0) sum+=n;
		sum+=n%10;
		n=n/10;
		if(n/10!=0) sum+=n;
	}
	cout<<sum;
}
