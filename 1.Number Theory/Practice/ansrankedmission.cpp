#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int MX=1e6+5;
int sPrime[MX];
int sieve()
{
	for(int i=1;i<MX;i++)
	{
		for(int j=1;j*i<MX;j++)
		  sPrime[i*j]++;
	}
}
int main()
{
	sieve();
	int T;
	cin>>T;
	while(T--)
	{
		ll x,y,max=0,min=1000006;
		cin>>x>>y;
	//	int n=()y-x+1;
		int facts[100001];
		for(int i=x;i<=y;i++)
		{
			facts[i]=sPrime[i];
			if(facts[i]>max) max=facts[i];
			if(facts[i]<min) min=facts[i];
		}
		int smin=0,smax=0,smid=0,csum=0;
		for(int i=x;i<=y;i++){
			if(sPrime[i]==min) smin+=i;
			else if(sPrime[i]==max) smax+=i;
			else{
			csum+=sPrime[i];
			smid+=i;	
			}
		}
		int F=min%26;
		int M=csum%26;
		int L=max%26;
		int arr[]={F,M,L};
		char c[3];
		for(int i=0;i<3;i++)
		{
			if(arr[i]%2==0)
			{
				c[i]='A'+arr[i];
			}else{
				c[i]='a'+arr[i];
			}
		}
		string t;
		t.push_back(c[0]);
		t.append(std::to_string(smin));
		t.push_back(c[1]);
		t.append(std::to_string(smax));
		t.push_back(c[2]);
		if(smid%2==0) cout<<t;
		else for(int i=t.length()-1;i>=0;i--) cout<<t[i];
		cout<<"\n";
	}
}
