//https://codeforces.com/problemset/problem/1494/A

#include <iostream>
#include <map>
using namespace std;
string s;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> s;
        map<char,int> ma;
        int l = s.size();
        if(s[0] == s[l - 1])
        {
            cout << "NO" << endl;
            continue;
        }
        ma[s[0]] = 1;
        ma[s[l - 1]] = -1;
        int num0 = 0,num1 = 0,num2 = 0;
        for(int i = 0 ; i < l ; i++)
        {
            if(ma[s[i]] == 1) num0++; 
            else if(ma[s[i]] == -1) num1++; 
            else num2++; 
        }
        if(num0 == num1 && num2 != 0) cout << "NO" << endl;
        else if(num0 < num1 && num0 + num2 != num1) cout << "NO" << endl; 
        else if(num0 > num1 && num1 + num2 != num0) cout << "NO" << endl;
        else
        {
            num2 = 0;
            if(num0 < num1) num2 = 1;
            else if(num0 > num1) num2 = -1;
            int sum = 0;
            for(int i = 0 ; i < l ; i++)
            {
                if(ma[s[i]] != 0) sum += ma[s[i]];
                else sum += num2;
                if(sum < 0) break;
            }
            if(sum < 0) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
    }
    return 0;
}
