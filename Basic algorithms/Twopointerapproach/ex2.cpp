/////////Find all triplets with zero sum/////////////
//Given an array of distinct elts the task is to find triplets in the array whose sum=0

//EG  arr[] = {0, -1, 2, -3, 1}  Output : (0 -1 1), (2 -3 1)

//Naive approach is to run 3 for loops

//Best approach is to run 2 loops one from 0 to n-2 and another from i+1 to n-1
//check if the sum of ith and jth multiplied with -1 is present in the set of jth


#include<bits/stdc++.h>
using namespace std;
 
// function to print triplets with 0 sum
void findTriplets(int arr[], int n)
{
    bool found = false;
 
    for (int i=0; i<n-2; i++)
    {
        // Find all pairs with sum equals to
        // "-arr[i]"
        unordered_set<int> s;
        for (int j=i+1; j<n; j++)
        {
            int x = -(arr[i] + arr[j]);
            if (s.find(x) != s.end())
            {
                printf("%d %d %d\n", x, arr[i], arr[j]);
                found = true;
            }
            else
                s.insert(arr[j]);
        }
    }
 
    if (found == false)
        cout << " No Triplet Found" << endl;
}
 
// Driver code
int main()
{
    int arr[] = {0, -1, 2, -3, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    findTriplets(arr, n);
    return 0;
}
