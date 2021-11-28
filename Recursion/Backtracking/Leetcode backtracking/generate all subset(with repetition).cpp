class Solution {
public:
    void backtrack(vector<vector<int>>& result, vector<int> cur, int index, vector<int> nums)
    {
        // base conditon
        if (index == nums.size()) {
            result.push_back(cur);
            return;
        }
        
        // without the current number
        backtrack(result, cur, index + 1, nums);
        
        // with the current number
        cur.push_back(nums[index]);
        backtrack(result, cur, index + 1, nums);
        cur.pop_back();
    }
    
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<vector<int>> result;
        vector<int> cur;
        int index = 0;
        backtrack(result, cur, index, nums);
        return result;
    }
};
