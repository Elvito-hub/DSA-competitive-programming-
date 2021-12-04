//////////////MINIMUM COST TO MAKE ALL ARRAY ELEMENTS EQUAL//////////////////
//Given an array arr[] consisting of N positive integers,
// the task is to make all values of this array equal to some integer value with minimum cost
// after performing below operations any number of times (possibly zero).

//1.Reduce the array element by 2 or increase it by 2 with zero cost.
//2.Reduce the array element by 1 or increase it by 1 with a unit cost.

//Eg: arr[] = {2, 4, 3, 1, 5}  Output: 2
//we change 3rd elt to 5(0 cost)
//we change 4th elt to 5(1->3->5) (0 cost)
//we change 1st elt to 5(2->4->5) (1 cost)
//we change 2nd elt to 5 (1 cost)
//So total cost=2;


//Approach: The basic idea is to count the number of even elements and odd 
//         elements present in the array and print the minimum of these two as the answer.
//         This approach works because we can make all even elements equal and all odd
//          elements equal without incurring any cost (Operation 1).
//          The updated array after performing these operations will only contain elements x and x + 1 
//          where one is odd and the other is even.
//          The elements from both the types can be changed into the other type with 1 unit cost and in order to minimise the cost,
//          the result will be the min(frequency(x), frequency(x + 1)).

// C++ implementation of the approach 
#include <bits/stdc++.h> 
using namespace std; 
int minCost(int arr[], int n) 
{ 
    int count_even = 0; 
    int count_odd = 0; 
    for (int i = 0; i < n; i++) { 
        if (arr[i] % 2 == 0) 
            count_even++; 
        else
            count_odd++; 
    } 
    return min(count_even, count_odd); 
} 
int main() 
{ 
    int arr[] = { 2, 4, 3, 1, 5 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << minCost(arr, n); 
    return 0; 
}
