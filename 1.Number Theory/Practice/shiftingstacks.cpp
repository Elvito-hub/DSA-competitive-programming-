//https://codeforces.com/contest/1486/problem/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while(t > 0)
    {
        t--;
        int n;
        scanf("%d", &n);
        int a[n], sum = 0;
        bool flag = true;
        for(int i = 0; i < n; i++) 
        {
            scanf("%d", &a[i]);
        }
        
        if(n == 1) printf("YES\n");
        else
        {
            for(int i = 0; i < n; i++)
            {   
                if(a[i] < i)
                {
                    if(sum - ((i-1)*(i)/2) < i - a[i])
                    {
                        flag = false;
                        break;
                    }
                }
                sum += a[i];
            }
            
            if(flag) printf("YES\n");
            else printf("NO\n");
        }
    }
    return 0;
}
