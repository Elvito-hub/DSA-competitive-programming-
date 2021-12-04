//https://www.geeksforgeeks.org/calculate-score-of-parentheses-from-a-given-string/
#include<bits/stdc++.h>
using namespace std;

// Function to calculate the score
// of the parentheses using stack
void scoreOfPrth(string s)
{
	stack<int> stack;
	stack.push(0);
	for(char c:s){
		if(c=='(')
			stack.push(0);
		else{
			int tmp = stack.top();
			stack.pop();
			int val=0;
			//if tmp is not zero
			//then inner paranthses exist
			if(tmp>0)
				val=tmp*2;
			else
				val=1;
            // Pass the score of this level
            // to parent parentheses
            stack.top()+=val;
		}
	}
	cout<<stack.top();
}
int main()
{
	string s="(()(()))";
	scoreOfPrth(s);
}
