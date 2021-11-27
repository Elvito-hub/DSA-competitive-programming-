#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	return a%b==0?b:gcd(b,a%b);
}
int main(){
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		int a[n];
		set<int> s;
		for(int i=0;i<n;i++){
			cin>>a[i];
			s.insert(a[i]);
		}
		if(s.size()==1&&*s.begin()>1){
			cout<<"NO"<<endl;
			continue;
		}else if(s.size()==1&&*s.begin()==1){
			cout<<"YES"<<endl;
			continue;
		}else if(s.size()>1){
		set<int>::iterator p=s.begin();
		int a=*p;
		p++;
		int b=*p;
		int g=gcd(a,b);
		p++;
		while(p!=s.end()){
			g=gcd(g,*p);
			p++;
		}
		if(g==1){
			cout<<"YES"<<endl;
			continue;
		}else{
			cout<<"NO"<<endl;
			continue;
		}
		}
	}
}
