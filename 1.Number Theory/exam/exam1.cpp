//segmented sieve
#include<bits/stdc++.h>
using namespace std;
void sieve(int limit,vector<int> &prime){
	bool mark[limit+1];
	memset(mark,true,sizeof(mark));
	for(int p=2;p*p<=limit;p++){
		if(mark[p])
		for(int i=p*p;i<=limit;i+=p) mark[i]=0;
	}
	for(int i=2;i<=limit;i++){
		if(mark[i]){
			prime.push_back(i);
			cout<<i<<" ";
		}
	}
}
void segmentedSieve(int n){
	int limit=floor(sqrt(n))+1;
	vector<int> prime;
	sieve(limit,prime);
	int low=limit;
	int high=2*limit;
	while(low<n){
		if(high>=n) high=0;
		bool mark[limit+1];
		memset(mark,true,sizeof(mark));
		for(int i=0;i<prime.size();i++){
			int lolim=floor(low/prime[i])*prime[i];
			if(lolim<low) lolim+=prime[i];
			for(int j=lolim;j<=high;j+=prime[i]) mark[j-low]=0;
			
		}
		for(int j=low;j<=high;j++) if(mark[j-low]==1) cout<<j<<" ";
		low+=limit;
		high+=limit;
	}
}
int main(){
	int n;
	cin>>n;
	segmentedSieve(n);
}







































//sieve of eras
//#include<bits/stdc++.h>
//using namespace std;
//const int MX=1e6+5;
//bitset<MX> isPrime;
//void sieve(int n){
//	isPrime[2]=1;
//	for(int i=3;i<=MX;i+=2) isPrime[i]=1;
//	for(int p=3;p*p<=MX;p++){
//		if(isPrime[p]){
//			for(int i=p*p;i<=MX;i+=p) isPrime[i]=0;
//		}
//	}
//	for(int i=2;i<=n;i++){
//		if(isPrime[i]) cout<<i<<" ";
//	}
//}
//int main(){
//	int n;
//	cin>>n;
//	sieve(n);
//}



















//finding primarity in sqrt(n)

//#include<bits/stdc++.h>
//using namespace std;
//bool isPrime(int n){
//	if(n==1) return 0;
//	if(n<=3) return 1;
//	if(n%2==0||n%3==0) return 0;
//	for(int i=5;i*i<n;i++){
//		if(n%i==0) return 0;
//	}
//	return 1;
//}
//int main(){
//	int n;
//	cin>>n;
//	isPrime(n)? cout<<"YES":cout<<"No";
//}
//









//linear diphantine equation
//#include<bits/stdc++.h>
//using namespace std;
//int gcd(int a,int b){
//	return a%b==0?b:gcd(b,a%b);
//}
//int isPossible(int a,int b,int c){
//	return c%gcd(a,b)==0;
//}
//int main(){
//	int a,b,c;
//	cin>>a>>b>>c;
//	isPossible(a,b,c) ? cout<<"Yes":cout<<"No";
//}
//
























//q2 find gcd using logarithmic time
//#include<bits/stdc++.h>
//using namespace std;
//int gcd(int a,int b){
//	return a%b==0? b:gcd(b,a%b);
//}
//int main(){
//	int a=36,b=60;
//	cout<<gcd(a,b);
//}












//q1 implement binary search

//#include<bits/stdc++.h>
//using namespace std;
//int binarySearch(int arr[],int sp,int ep,int searchTerm){
//	if(ep>=sp){
//		int mid= sp+(ep-sp)/2;
//		if(arr[mid]==searchTerm) return mid;
//		else if(arr[mid]>searchTerm) return binarySearch(arr,sp,mid-1,searchTerm);
//		else if(arr[mid]<searchTerm) return binarySearch(arr,mid+1,ep,searchTerm);
//	}
//		return -1;
//}
//int main(){
//	int a[8]={2,4,6,1,8,16,9,10};
//	int searchTerm;
//	sort(a,a+8);
//	cout<<"After sort"<<endl;
//	for(int i=0;i<8;i++){
//		cout<<a[i]<<" ";
//	}
//	cout<<"\n";
//	cout<<"Enter searchTerm"<<endl;
//	cin>>searchTerm;
//	cout<<binarySearch(a,0,7,searchTerm);
//}
