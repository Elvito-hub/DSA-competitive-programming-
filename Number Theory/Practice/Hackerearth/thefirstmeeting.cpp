#include <bits/stdc++.h>
 
using namespace std;
const int MX = 1e6+5;
 
bitset<MX> isPrime;
int arr[MX];
 
void sieve()
{
    isPrime[2] = 1;
    for(int i = 3; i <= MX; i+=2)
        isPrime[i] = 1;
    for(int i = 3; i*i <= MX; i+=2)
    {
        if(isPrime[i])
        {
            for(int j = i*i; j <= MX; j+= (i+i))
                isPrime[j] = 0;
        }
    }
}
 
int main()
{
    sieve();
 
    int n;
    scanf("%d", &n);
 
    int mx = INT_MIN;
    int mn = INT_MAX;
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
 
    for(int i = 0; i < n; i++)
    {
        if(isPrime[arr[i]])
        {
            mx = max(mx, arr[i]);
            mn = min(mn, arr[i]);
        }
    }
 
    if(mx == INT_MIN)
        printf("-1\n");
 
    else
        printf("%d\n", abs(mx-mn));
 
    return 0;
}
