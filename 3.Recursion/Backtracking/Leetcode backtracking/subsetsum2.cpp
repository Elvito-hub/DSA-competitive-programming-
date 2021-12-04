class Solution {
public:
    vector<int> tup;
    vector<vector<int>> res;
    void sol(int index,int count,int sum,vector<int>cand)
    {
        if(count==sum)
        {
            res.push_back(tup);
            return;
        }else{
            for(int i=index;i<cand.size()&&count+cand[i]<=sum;i++)
            {
                if(i>index&&cand[i]==cand[i-1])
                    continue;
                tup.push_back(cand[i]);
                sol(i+1,count+cand[i],sum,cand);
                tup.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        sol(0,0,target,candidates);
        return res;
    }
};
