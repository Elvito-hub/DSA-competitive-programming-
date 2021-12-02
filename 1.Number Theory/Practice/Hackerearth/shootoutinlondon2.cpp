#include<bits/stdc++.h>
using namespace std;
const int MX=1e6+5;
bitset<MX> isPrime;
void sieve(){
	isPrime[2]=1;
	for(int i=3;i<=MX;i+=2) isPrime[i]=1;
	for(int p=3;p*p<=MX;p++){
		if(isPrime[p]){
			for(int i=p*p;i<=MX;i+=p)
			isPrime[i]=0;
		}
	}
}
int main()
{
    sieve();
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int npl[n],npr[n];
    int ind=-1;
    for(int i=0;i<n;i++){
        if(isPrime[arr[i]])
        npl[i]=i,ind=i;
        else if(ind>-1){
          npl[i]=ind;
        }
        else
        npl[i]=-1;
    }
    ind=-1;
    for(int i=n-1;i>=0;i--){
        if(isPrime[arr[i]])
        npr[i]=i,ind=i;
        else if(ind>-1){
          npr[i]=ind;
        }
        else
        npr[i]=-1;
    }
    for(int i=0;i<n;i++){
        if(npl[i]==-1&&npr[i]==-1)
        cout<<-1<<" ";
        else if(npl[i]==-1)
        cout<<npr[i]+1<<" ";
        else if(npr[i]==-1)
        cout<<npl[i]+1<<" ";
        else if(i-npl[i]<=npr[i]-i)
        cout<<npl[i]+1<<" ";
        else
        cout<<npr[i]+1<<" ";
    }
    // for(int i=0;i<n;i++)
    // cout<<ans[i]<<" ";
}
