class Solution {
public:
    set<vector<int>> res;
    void solve(vector<int> cur,int pos,vector<int> nums)
    {
        if(pos==nums.size())
        {
            
             sort(cur.begin(),cur.end());
            // auto ad=find(res.begin(),res.end(),cur);
            // if(ad==res.end())
            // {
                res.insert(cur);
            // }
             return;
        }
        //without cur numbr
        solve(cur,pos+1,nums);
        //with cur nbr
        cur.push_back(nums[pos]);
        solve(cur,pos+1,nums);
        cur.pop_back();
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> cur;
        solve(cur,0,nums);
        vector<vector<int>> v;
        copy(res.begin(),res.end(),back_inserter(v));
        return v;
    }
};
