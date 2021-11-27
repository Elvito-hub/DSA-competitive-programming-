#include<bits/stdc++.h>
using namespace std;
const int MX=1e6+5;
bitset<MX> isPrime;
void sieve(){
	isPrime[2]=1;
	for(int i=3;i<=MX;i+=2) isPrime[i]=1;
	for(int p=3;p*p<=MX;p++){
		if(isPrime[p]){
			for(int i=p*p;i<=MX;i+=p) isPrime[i]=0;
		}
	}
}
int main(){
	sieve();
	int T;
	cin>>T;
	while(T--){
		string s;
		set<char> distinct;
		distinct.clear();
		cin>>s;
		for(int i=0;i<s.length();i++){
			distinct.insert(s[i]);
		}
		if(isPrime[distinct.size()]){
			set<char>::iterator p=distinct.begin();
			while(p!=distinct.end()){
				int count=0;
				for(int i=0;i<s.length();i++){
					if(*p==s[i]) count++;
				}
				if(isPrime[count]){
					p++;
				}else{
					goto z;
				}
			}
		}else{
			goto z;
		}
		cout<<"YES"<<endl;
		continue;
		z:
			cout<<"NO"<<endl;
	}
}
