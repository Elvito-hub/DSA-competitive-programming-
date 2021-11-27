#include<bits/stdc++.h>

using namespace std;

int main(){

int t;cin>>t;

while(t--){

int n;cin>>n;

int count=0;

for(int i=1;i*i<=n;++i){

if(n%i==0) count+=2;

if(i*i==n) count--;

}

cout<<count<<endl;

}
}


