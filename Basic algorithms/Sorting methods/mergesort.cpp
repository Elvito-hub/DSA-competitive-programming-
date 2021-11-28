#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int l,int m,int r)
{
	int n1=m-l+1;
	int n2=r-m;
	int L[n1],R[n2];
	
	for(int i=0;i<n1;i++)
	   L[i]=arr[l+i];
    for(int j=0;j<n2;j++)
       R[j]=arr[m+1+j];
    
    // Merge the temp arrays back into arr[l..r]
 
    // Initial index of first subarray
    int i = 0;
 
    // Initial index of second subarray
    int j = 0;
 
    // Initial index of merged subarray
    int k = l;
    
    
    while(i<n1&&j<n2)
    {
    	if(L[i]<=R[j])
    	{
    		arr[k]=L[i];
    		i++;
		}
		else {
			arr[k]=R[j];
			j++;
		}
		k++;
	}
	//Copy the remaining elements of L[], if there is any
	while(i<n1)
	{
		arr[k]=L[i];
		i++;
		k++;
	}
	//Copy the remaining elements of R[],if there is any
	while(j<n2)
	{
		arr[k]=R[j];
		j++;
		k++;
	}
	
}
void mergeSort(int arr[],int l,int r)
{
	if(l<r)
	{
		int m=l+(r-l)/2;
		mergeSort(arr,l,m);
		mergeSort(arr,m+1,r);
		merge(arr,l,m,r);
	}
}
void printArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
}
int main()
{
	int arr[]={38,27,43,3,9,82,10};
	int arr_size=sizeof(arr)/sizeof(arr[0]);
	cout<<"Given array is: ";
	printArray(arr,arr_size);
	
	mergeSort(arr, 0, arr_size - 1);
	
	cout<<"\nSorted array is \n";
    printArray(arr, arr_size);
    return 0;
	 
	 
	 
}
