//https://www.geeksforgeeks.org/print-the-string-obtained-after-removal-of-outermost-parentheses/

#include<bits/stdc++.h>
using namespace std;

// Function to remove outermost
// enclosing brackets from both end
void removeBrakets(string str)
{
	int n=str.length();
	int cnt=0;
	while(cnt<n && str[cnt] == '(' &&
					str[n-cnt-1]==')')
	{
		cnt++;
	}
	int error=0;
	int open=0;
	for(int i=cnt;i<n-cnt;i++)
	{
		if(str[i]=='(')
			open++;
		else if(str[i]==')')
		{
			if(open>0)
				open--;
			else
				error++;
		}
	}
	int rem=cnt-error;
	cout<<str.substr(rem,n-2*rem)<<endl;
}
int main()
{
    // Input string
    string str = "((((a)b)(c)))";
    removeBrakets(str);
  
    return 0;	
}
