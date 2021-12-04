// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to check if a valid parenthesis
// can be obtained by moving characters
// to either end at most K number of times
void minimumMoves(string s, int n, int k)
{
	// Base Case 1
	if (n & 1) {
		cout << "No";
		return;
	}

	// Count of '(' and ')'
	int countOpen = count(s.begin(),
						s.end(), '(');
	int countClose = count(s.begin(),
						s.end(), ')');

	// Base Case 2
	if (countOpen != countClose) {
		cout << "No";
		return;
	}

	// Store the count of moves required
	// to make a valid parenthesis
	int ans = 0;
	int cnt = 0;

	// Traverse the string
	for (int i = 0; i < n; ++i) {

		// Increment cnt if opening
		// bracket has occurred
		if (s[i] == '(')
			++cnt;

		// Otherwise, decrement cnt by 1
		else {

			// Decrement cnt by 1
			--cnt;

			// If cnt is negative
			if (cnt < 0) {

				// Update the cnt
				cnt = 0;

				// Increment the ans
				++ans;
			}
		}
	}

	// If ans is at most K, then
	// print Yes. Otherwise print No
	if (ans <= k)
		cout << "Yes";
	else
		cout << "No";
}

// Driver Code
int main()
{
	string S = ")()(";
	int K = 1;
	minimumMoves(S, S.length(), K);

	return 0;
}

