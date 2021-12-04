#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pll pair<ll,ll>
#define F first
#define S second
#define pb push_back
#define repu(v,s,e) for(ll v=s;v<e;v++)
#define repd(v,s,e) for(ll v=s;v>e;v--)
#define all(a) (a).begin(),a.end()
#define fastio                            \
      ios_base::sync_with_stdio( false ); \
      cin.tie(NULL);                      \
      cout.tie(NULL);                     \
      
      
#define N 8
 
 int solveKTUtil(int x,int y,int movei,int sol[N][N],
	 				 int xMove[N],int yMove[N]);

int isSafe(int x,int y,int sol[N][N])
{
	return (x>=0&&x<N&&y>=0&&y<N&& sol[x][y]==-1);
}
void printSolution(int sol[N][N])
{
	for(int x=0;x<N;x++)
	{
		for(int y=0;y<N;y++)
			cout<<" "<<setw(2)<<sol[x][y]<<" ";
		cout<<endl;
	}
}
 
int solveKT()
{
	int sol[N][N];
	/* Initialization of solution matrix */
	for(int x=0;x<N;x++)
		for(int y=0;y<N;y++)
			sol[x][y]=-1;
			
	/* xMove[] and yMove[] define next move of Knight.
    xMove[] is for next value of x coordinate
    yMove[] is for next value of y coordinate */
    
    int xMove[8]={2, 1, -1, -2, -2, -1, 1, 2};
    int yMove[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };
    
    // Since the Knight is initially at the first block
    sol[0][0] = 0;
    if(solveKTUtil(0, 0, 1, sol, xMove, yMove)==0){
    	cout << "Solution does not exist";
        return 0;
	}else
		printSolution(sol);
		
	return 1;
	 }     
	 
	 int solveKTUtil(int x,int y,int movei,int sol[N][N],
	 				 int xMove[N],int yMove[N])
	 	{
	 		int k,next_x,next_y;
	 		if(movei==N*N)
	 				return 1;
	 		
	 		for(k=0;k<8;k++)
	 		{
	 			next_x=x+xMove[k];
	 			next_y=y+yMove[k];
	 			if(isSafe(next_x,next_y,sol)){
	 				sol[next_x][next_y]=movei;
	 				if(solveKTUtil(next_x, next_y, movei + 1, sol,
                            xMove, yMove)==1)
                            return 1;
                    else
                    		sol[next_x][next_y]=-1;
				 }
			 }
			 return 0;
		 }
int main()
{
	fastio;
	solveKT();
}
