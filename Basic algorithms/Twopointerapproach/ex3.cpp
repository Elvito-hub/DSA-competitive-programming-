//////////////////////Find a triplet that sum to a given value/////////////////


//Given an array and a value. find if there is a triplet in array whose sum is equal to the given value.

//EG: array = {12, 3, 4, 1, 6, 9}, sum = 24; Output: 12, 3, 9

//1st method is using 3 loops which is naive 
//2nd method using 2pointer appraoch

//#include<bits/stdc++.h>
//using namespace std;
//bool find3Numbers(int A[], int arr_size, int sum)
//{
//	int l,r;
//	sort(A,A+arr_size);
//	
//	for(int i=0;i<arr_size-2;i++)
//	{
//		l=i+1;
//		r=arr_size-1;
//		while(l<r)
//		{
//			if(A[i]+A[l]+A[r]==sum)
//			{
//				printf("Triplet is %d, %d, %d", A[i], A[l], A[r]);
//				return true;
//			}
//			else if(A[i]+A[l]+A[r]<sum)
//			   l++;
//			else 
//			   r--;
//		}
//	}
//	return false;
//}
//int main()
//{
//	int A[] = { 1, 4, 45, 6, 10, 8 };
//	int sum = 22; 
//    int arr_size = sizeof(A) / sizeof(A[0]);
//	find3Numbers(A, arr_size, sum);
//	return 0; 
//	
//}


//3rd method uses Hashing based solution

#include<bits/stdc++.h>
using namespace std;
bool find3Numbers(int A[], int arr_size, int sum) 
{
	for(int i=0;i<arr_size-2;i++)
	{
		unordered_set<int> s;
		int curr_sum=sum-A[i];
		for(int j=i+1;j<arr_size;j++)
		{
			if(s.find(curr_sum-A[j])!=s.end())
			{
			printf("Triplet is %d, %d, %d", A[i], 
                    A[j], curr_sum - A[j]);
                return true;
			}
			s.insert(A[j]);
		}
	}
	return false;
}
int main()
{
	int A[]={1,4,45,6,10,8};
	int sum=22;
	int arr_size=sizeof(A)/sizeof(A[0]);
	find3Numbers(A, arr_size, sum); 
	return 0;
}
