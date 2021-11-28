//////////////////21 Matchsticks problem////////////
// Given 21 Matchsticks and 2 users, 
// A and B (computer and user respectively).
// Users can pick matchsticks not more than four at a time.
// The one who is forced to pick the last matchstick loses.
// Given an array arr[] which contains the moves of the computer. 
// The task is to print the moves of the user so that the user wins the game.

//EG: Input : N = 4, arr=[ 3, 4, 2, 2]  Output : 2, 1, 3, 3

//When the computer chooses 3 sticks, the user chooses 2 sticks
//When the computer chooses 4 sticks, the user chooses 1 stick
//When the computer chooses 2 sticks, the user chooses 3 sticks
//When the computer chooses 2 sticks, the user chooses 3 sticks
//Now only 1 stick is left and the computer is forced to pick that


//APPROACH: 
  //Idea is to think for 20 matchsticks as the user who would pick the last one will lose the game.
  //Divide 20 into four parts that is, each part is of size 5. So if the computer picks x matchsticks 
  //then the user should pick (5-x) matchsticks and should proceed in the same way.
  
  
#include<bits/stdc++.h>
using namespace std;
void TwentyoneMatchstick(int arr[],int N)
{
	for(int i=0;i<N;i++)
	  cout<<5-arr[i]<<" ";
	  
	cout<<endl;
}
int main() 
{ 
    int arr[] = { 3, 4, 2, 2 }; 
    int N = sizeof(arr) / sizeof(arr[0]); 
    TwentyoneMatchstick(arr, N); 
    return 0; 
}
