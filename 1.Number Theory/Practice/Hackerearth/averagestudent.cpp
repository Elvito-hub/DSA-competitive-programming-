#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define mod 1000000007
lli s[1000000]={};
void seive()
{
   for(int i=1;i<=1000000;i++)
       for(int k=i;k<=1000000;k+=i)s[k]++;
}
int main()
{
   seive();
   int n,m;
   int a[5]={};
   scanf("%d",&n);
   while(n--)
   {
       scanf("%d",&m);
       if(s[m]<5)a[s[m]]++;
   }
   lli res=a[2]+a[3]-a[4]-a[1];
   printf("%lld",res);

}
