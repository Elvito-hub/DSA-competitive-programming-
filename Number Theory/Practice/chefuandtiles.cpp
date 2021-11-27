#include<bits/stdc++.h>
using namespace std;
const int MX=1e6+1;
int phi[MX];
int main()
{
	for(int i=0;i<MX;i++) phi[i]=i;
	
	for(int i=2;i<MX;i++)
	{
		if(phi[i]==i)
		{
			for(int j=i;j<MX;j+=i)
			  phi[j]-=phi[j]/i;
		}
	}
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		cout<<phi[n]<<endl;
	}
}
