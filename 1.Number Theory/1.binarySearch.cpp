#include<bits/stdc++.h>
using namespace std;
int arr[100];
int binarySearch(int arr[],int sp,int ep,int searchTerm){
	if(ep>=sp){
		int mid=sp+(ep-sp)/2;
		if(arr[mid]==searchTerm){
			return mid;
		}else if(searchTerm < arr[mid]){
			return binarySearch(arr,sp,mid-1,searchTerm);
		}else if(searchTerm > arr[mid]){
			return binarySearch(arr,mid+1,ep,searchTerm);
		}
	}
		return -1;
}
int main(){
	int n,searchTerm;
	cin>>n>>searchTerm;
	for(int i=0;i<n;i++) cin>>arr[i];
	sort(arr,arr+n);
	int res=binarySearch(arr,0,n-1,searchTerm);
	cout<<res+1;
}
