#include<iostream>
using namespace std;
long long int solve(long long int x)
{
if(x < 9)
return x;

return x%9 + 10*solve(x/9);

}

int main()
{
long long int x;
while(cin>>x)

cout<<solve(x)<<"\n";

}
