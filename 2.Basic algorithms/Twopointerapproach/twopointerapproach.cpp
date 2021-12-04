////////////////TWO POINTERS TECHNIQUE////////////////
//It is an easy and effective technique which is typically used for searching pairs in a sorted array.

//Eg Given a sorted array A (sorted in ascending order), having N integers, 
//find if there exists any pair of elements (A[i], A[j]) such that their sum is equal to X.




//NAIVE SOLUTION (Time complexity O(n^2)

//#include<bits/stdc++.h>
//using namespace std;
//bool isPairSum(int A[],int N,int X)
//{
//	for(int i=0;i<N;i++)
//	{
//		for(int j=0;j<N;j++)
//		{
//			if(i==j) continue;
//			
//			if(A[i]+A[j]==X) return 1;
//			if(A[i]+A[j]>X) break;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[]={3,5,9,2,8,10,11};
//	int val=17;
//	int arrSize=sizeof(arr)/sizeof(arr[0]);
//	sort(arr,arr+arrSize);
//	cout<<isPairSum(arr,arrSize,val);
//	
//	return 0;
//}


//With 2 pointer technique. we take 2 pointers, one representing the 1st elt and
//another representing the last elt.
//And then we add values on both pointers, if their sum is smaller than X we shift left p to right
//or if the sum is greater than X then we shift the right pointer to left.
//we keep moving pointers until we get the sum as X

#include<bits/stdc++.h>
using namespace std;
int isPairSum(int A[],int N,int X)
{
	int i=0;
	int j=N-1;
	while(i<j)
	{
		if(A[i]+A[j]==X)
		 return 1;
		 
		else if (A[i]+A[j]<X) i++;
		else j--;
	}
	return 0;
}
int main()
{
	int arr[]={3,5,9,2,8,10,11};
	int val=17;
	int arrSize=sizeof(arr)/sizeof(arr[0]);
	cout<<isPairSum(arr,arrSize,val);
}
