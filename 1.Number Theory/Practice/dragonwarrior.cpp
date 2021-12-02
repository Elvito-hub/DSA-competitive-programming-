#include<bits/stdc++.h>

using namespace std;

int main()
{
    const int max=1000000;
    int phi[max+1];
    for(int i=0;i<=max;i++)
    {
        phi[i]=i;
    }
    for(int i=2;i<=max;i++)
    {
        if(phi[i]==i)
        for(int j=i;j<=max;j+=i)
        {
            phi[j]=phi[j]-phi[j]/i;
        }
    }
    int n;
    cin>>n;
    long long int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+phi[i];
    }
    cout<<sum;
    return 0;
}
