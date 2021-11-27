/////////Count all possible paths from top left to bottom right of a mXn matrix/////


//Count all possible paths from top left to bottom right of mXn matrix with 
//constraints that from each cell you can either move only to right or down


//EXample m = 2, n = 2; ans:2;
//(0, 0) -> (0, 1) -> (1, 1)
//(0, 0) -> (1, 0) -> (1, 1)

//EXample m = 2, n = 3; ans:3;

//(0, 0) -> (0, 1) -> (0, 2) -> (1, 2)
//(0, 0) -> (0, 1) -> (1, 1) -> (1, 2)
//(0, 0) -> (1, 0) -> (1, 1) -> (1, 2)


#include<bits/stdc++.h>
using namespace std;
int numberOfPaths(int m,int n)
{
	if(m==1||n==1)
	  return 1;
	  
	return numberOfPaths(m-1,n)+numberOfPaths(m,n-1);

}
int main()
{
	cout<<numberOfPaths(3,3);
	return 0;
}
