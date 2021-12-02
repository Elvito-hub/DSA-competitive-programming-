#include<bits/stdc++.h>
using namespace std;
const int MX=1e6+5;
int primeFact[MX];
void divisors()
{
	for(int i=1;i<MX;i++) primeFact[i]=1;
	for(int i=2;i<MX;i++)
	{
		for(int j=1;j*i<MX;j++)
		primeFact[i*j]++;
	}
	for(int i=0;i<MX;i++)
        primeFact[i]=primeFact[i]*i;
    int m=1,point=1;
	for(int i=1;i<MX;i++)
    {
        if(primeFact[i]>m)
            m=primeFact[i],point=i;
        primeFact[i]=m+i-point; 
    }
}
int main()
{
	divisors();
	int T;
	cin>>T;
	while(T--)
	{
	   int a;
	   cin>>a;
	   cout<<primeFact[a]<<endl;
	}
}
