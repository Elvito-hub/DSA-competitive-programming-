//////////////////////////////////Count pairs in an array such that the absolute difference between them is = K/////////////////////////


//APPROACH: 1st sort the given array.
//Now for every element arr[i], find the first element on the right arr[j] such that (arr[j] – arr[i]) = K
//bcz all elts after this satisfy the same condition


#include<bits/stdc++.h>
using namespace std;
int count(int arr[],int n,int k)
{
	sort(arr,arr+n);
	int cnt=0;
	int i=0,j=1;
	while(i<n&&j<n)
	{
		//j is always greater than i
		j=(j<=i)?(i+1):j;
		
		//find the first elt arr[j] such that (arr[j] - arr[i]) >= K
		while(j<n&&(arr[j]-arr[i])<k)
		j++;
		cnt+=(n-j);
		i++;
	}
	return cnt;
}
int main() 
{ 
    int arr[] = { 1, 2, 3, 4 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int k = 2; 
    cout << count(arr, n, k); 
    return 0; 
} 
