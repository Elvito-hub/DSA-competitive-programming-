class Solution {
public:
    set<vector<int>> res;
    void solve(vector<int>cur,int pos,vector<int>nums)
    {
        if(cur.size()>=2)
        {
            res.insert(cur);
        }
        for(int i=pos;i<nums.size();i++)
        {
            if(!cur.empty()&&nums[i]<cur[cur.size()-1])
                continue;

                cur.push_back(nums[i]);
                solve(cur,i+1,nums);
                cur.pop_back();
        }
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int> cur;
        vector<vector<int>> ans;
        solve(cur,0,nums);
        copy(res.begin(),res.end(),back_inserter(ans));
        return ans;
    }
};
