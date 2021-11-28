class Solution {
public:
    vector<vector<int>> ans;
    vector<int> tup;
    void solve(vector<int>tup,vector<int> nums,unordered_map<int,bool>& used)
    {
        if(tup.size()==nums.size())
        {
            ans.push_back(tup);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(!used[nums[i]])
            {
                tup.push_back(nums[i]);
                used[nums[i]]=1;
                solve(tup,nums,used);
                tup.pop_back();
                used[nums[i]]=0;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        unordered_map<int,bool> used;
        solve(tup,nums,used);
        return ans;
    }
};
