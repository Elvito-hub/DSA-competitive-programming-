#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,n,i,j;
    cin>>test;
    while(test--)
    {
        cin>>n;
        int arr[n];
        unordered_map < int,int > m;
        for( i=0;i<n;i++)
        {
            cin>>arr[i];
            m[arr[i]]++;
        }
        sort(arr,arr+n);
        int mx=arr[n-1];
        long long  count=0;
        
        
        for( i=0;i<n;i++)
        {
        	//check for every multiple of arr[i] to max if it's present 
            for( j=2*arr[i];j<=mx;j+=arr[i])
            {
                if(m[j])
                {
                    count=count+m[j];
                }
            }
            //if there are multiple elts of arr[i] then add remaining ones and remove one of them from m
            if(m[arr[i]]>1)
            {
                count=count+m[arr[i]]-1;
                m[arr[i]]--;
            }
        }
        cout<<count<<endl;
    }
}
