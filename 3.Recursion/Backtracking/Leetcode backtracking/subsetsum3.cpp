class Solution {
public:
    vector<vector<int>> ans;
    vector<int> tup;
    void solve(vector<int> tup,int index,int sum,int k,int n)
    {
      if(tup.size()==k&&sum==n)
      {
          ans.push_back(tup);
          return;
      }else if(tup.size()>=k||sum>=n)
      {
          return ;
      }
        for(int i=index;i<10&&sum+i<=n;i++)
        {
            tup.push_back(i);
            solve(tup,i+1,sum+i,k,n);
            tup.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        solve(tup,1,0,k,n);
        return ans;
    }
};
