#include<bits/stdc++.h>
using namespace std;
struct Job
{
	char id;
	int dead;
	int profit;
};

//Function used in sorting jobs 
bool comparison(Job a,Job b)
{
	return (a.profit>b.profit);
}

void printJobScheduling(Job arr[],int n)
{
	sort(arr,arr+n,comparison);
	
	int result[n]; //store the result
	bool slot[n];  //Keep track of free slots
	
	//Initialize all slots to be free
	for(int i=0;i<n;i++)
		slot[i]=false;
	
	//To iterate through all given jobs
	for(int i=0;i<n;i++)
	{
		//find free slots(Note that we start from last possible slot)
		for(int j=min(n,arr[i].dead)-1;j>=0;j--)
		{
			if(slot[j]==false)
			{
				result[j]==i;
				slot[j]=true;
				break;
			}
		}
	}
	
	//print the result
	for(int i=0;i<n;i++)
	{
		if(slot[i])
			cout<<arr[result[i]].id<<" ";
	}
	
}
int main()
{
    Job arr[] = { {'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27},
                   {'d', 1, 25}, {'e', 3, 15}};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Following is maximum profit sequence of jobs \n";
   
    // Function call
    printJobScheduling(arr, n);
    return 0;
}

