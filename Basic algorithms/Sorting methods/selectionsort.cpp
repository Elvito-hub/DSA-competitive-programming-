//////////////////Selection Sort/////////////////
//it sorts an array by repeatedly finding the minimum elt from unsorted part and putting it at
//the beginning , the algo maintains 2 subarrays
//1.the subarray which is already sorted
//2.remaining subarray which is unsorted

#include<bits/stdc++.h>
using namespace std;
void swap(int *xp,int *yp)
{
	int temp=*xp;
	*xp=*yp;
	*yp=temp;
}
void selectionSort(int arr[],int n)
{
	int i,j,min_idx;
	for(i=0;i<n-1;i++)
	{
		min_idx=i;
		for(j=i+1;j<n;j++)
		if(arr[j]<arr[min_idx])
		  min_idx=j;
		  
		swap(&arr[min_idx],&arr[i]);
	}
}
void printArray(int arr[],int size)
{
	int i;
	for(i=0;i<size;i++)
	   cout<<arr[i]<<" ";
	cout<<endl;
}
int main()
{
	int arr[]={64,25,12,22,11};
	int n=sizeof(arr)/sizeof(arr[0]);
	selectionSort(arr,n);
	cout<<"Sorted array: \n";
	printArray(arr,n);
	return 0;
}


//The good thing about selection sort is it never makes more than O(n)
// swaps and can be useful when memory write is a costly operation.

