#include "bits/stdc++.h"
using namespace std;
#define MX 100001
long long spf[MX]={0};
void sieve(){
	spf[1]=1;
	for(int i=2;i<MX;i++)
	   spf[i]=i;
	for(int i=4;i<MX;i+=2)
	   spf[i]=2;
	   
	for(int i=3;i<=MX;i++)
	{
		if(spf[i]==i){
			for(int j=i*i;j<MX;j+=i){
				if(spf[j]==j)
				spf[j]=i;
			}
		}
	}
}
bool getFactorization(int x) {
	int count=0;
	set<int> df;
	while(x!=1){
		count++;
		df.insert(spf[x]);
		x=x/spf[x];
	}
	return count==2&&df.size()==2?1:0;
}
int main(int argc, char const *argv[]){
	sieve();
	int T;
	cin>>T;
	while(T--){
		int l,r,count=0;
		cin>>l>>r;
		for(int i=l;i<=r;i++){
			if(getFactorization(i)) count++;
		}
		cout<<count<<endl;
	}
	return 0;
}
