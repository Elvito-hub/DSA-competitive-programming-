////////////////////////////Maximum length sub-array which satisfies the given conditions/////////

//Given a binary array arr[], the task is to find the length 
//of the longest sub-array of the given array such that if the sub-array is divided
// into two equal-sized sub-arrays then both the sub-arrays either contain all 0s or all 1s.

//EG: Input: arr[] = {1, 1, 1, 0, 0, 1, 1}  Output: 4
//{1, 1, 0, 0} and {0, 0, 1, 1} are the maximum length valid sub-arrays.

//Input: arr[] = {1, 1, 0, 0, 0, 1, 1, 1, 1} Output: 6
//{0, 0, 0, 1, 1, 1} is the only valid sub-array with maximum length.


//APPROACH: for every 2 consecutive elts of the array say arr[i] and arr[j] where j=i+1
//treat them as the middle 2 elts of required sub-array.
//In order for this sub-array to be a valid sub-array arr[i] must not be equal to arr[j]. 
//it's size is 2;
//Now, try to extend this sub-array to a bigger size by decrementing i and 
//incrementing j at the same time and all the elements before index i and after index j must be equal to arr[i] and arr[j] respectively.


#include<bits/stdc++.h>
using namespace std;
int maxLength(int arr[],int n)
{
	int maxLen=0;
	
	int i=0;
	int j=i+1;
	while(j<n){
		if(arr[i]!=arr[j]){
			maxLen=max(maxLen,2);
			
			int l=i-1;
			int r=j+1;
			
		    // While elements at indices l and r 
            // are part of a valid sub-array
			while(l>=0&&r<n&&arr[l]==arr[i]&&arr[r]==arr[j])
			{
				l--;
				r++;
			}
            // Update the maximum length so far 
            maxLen = max(maxLen, 2 * (r - j));
		}
	    // Select the next consecutive pair 
        i++; 
        j = i + 1;
	}
	return maxLen;
}
int main() 
{ 
    int arr[] = { 1, 1, 1, 0, 0, 1, 1 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << maxLength(arr, n); 
  
    return 0; 
}
