class Solution {
public:
    bool checkIfPermutated(vector<int>& nums, int i, int start){
        for(int j=start;j<i;j++){
            if(nums[j]==nums[i]) return true;
        }
        return false;
    }
    
    
    void solve(vector<int>& nums, vector<vector<int>>& ans, int start, int end){
        if(start==end){
            ans.push_back(nums);
        }
        else{
            for(int i=start;i<=end;i++){
                if(i!=start && checkIfPermutated(nums, i, start)) continue;
                swap(nums[i], nums[start]);
                solve(nums, ans, start+1, end);
                swap(nums[i], nums[start]);
            }
        }
    }
    
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        solve(nums, ans, 0, nums.size()-1);
        return ans;
    }
};
