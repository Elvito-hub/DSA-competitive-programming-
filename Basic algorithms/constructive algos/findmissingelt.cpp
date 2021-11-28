///////////////FINDING MISSING ELTS FROM AN ARRAY//////////////////
//Given a list of integers from the range [1, N] with some of the elements missing.
// The task is to find the missing elements.
// Note that there can be duplicates in the list


//EG: arr[] = {1, 3, 3, 3, 5}         Output: 2 4
//EG: arr[] = {1, 2, 3, 4, 4, 7, 7}   Output: 5 6            

// In the given range [1, N] there should be an element corresponding to each index. 
//If an element is missing then its index will never be visited.


#include<bits/stdc++.h>
using namespace std;
vector<int> missing_elements(vector<int> vec) 
{
	vector<int> mis; 
	for (int i = 0; i < vec.size(); i++)
	{
	     // Find its index 
        int temp = abs(vec[i]) - 1;	
        
        // Update the element at the found index 
        vec[temp] = vec[temp] > 0 ? -vec[temp] : vec[temp]; 
        cout<<temp<<" "<<vec[temp]<<endl;
	}
	for(int i=0;i<vec.size();i++)
	    if(vec[i]>0) mis.push_back(i+1);
	    
	return mis;
}
int main()
{
	vector<int> vec = { 3, 3, 3, 5, 1 }; 
	vector<int> miss_ele = missing_elements(vec);
	 
    for (int i = 0; i < miss_ele.size(); i++) 
        cout << miss_ele[i] << " ";
        
    return 0;
}
