#include<bits/stdc++.h>
using namespace std;
const int MX=1e6+1;
bool isPrime[MX];
void sieve()
{
	memset(isPrime,true,sizeof(isPrime));
	for(int p=2;p*p<MX;p++){
		if(isPrime[p]==true){
			for(int i=p*p;i<MX;i+=p){
				isPrime[i]=false;
			}
		}
	}
}
int main()
{
//	ios_base::sync_with_stdio(false);
	sieve();
	int T,n,i,j;
	cin>>T;
	while(T--)
	{
		scanf("%d",&n);
		for(i=n,j=n;i<MX||j>1;i++,j--)
		{
			if(isPrime[j]){printf("%d",j); break;}
			else if(isPrime[i]){printf("%d",i); break;}
		}
		cout<<"\n";
	}
}
