
class Solution {
public:
    vector<int>save ;
    vector<vector<int>>mat ;
    void dfs(int index , int count , int target , vector<int>&nums){
        if (count==target){
            mat.push_back(save) ;
            return  ;
        }
        for (int i = index ; i<nums.size()&&(target-count)>=nums[i] ; i++){
            save.push_back(nums[i]) ;
            dfs(i , count+nums[i] , target , nums) ;
            save.pop_back() ;
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin() , candidates.end()) ;
        dfs(0 , 0 , target, candidates) ;
        return mat ;
    }
};
