class Solution {
public:

    void arrangePerm(int ind,int n,vector<bool>& visited,int& count)
    {
        //ind is 1-based index
        if(ind==n+1)
        {
            //we have created a permutation 
            count++;
            return;
        }
        for(int i=1;i<=n;i++)
        {
             //if the current i is not yet used in perm
            if(!visited[i] && (i%ind==0 || ind%i==0))
            {
               //we can place the i in ind
                visited[i]=true;
                arrangePerm(ind+1,n,visited,count);
                visited[i]=false;
            }
        }
    }
    
        int countArrangement(int n) {
        int count=0;
        
        //keep track of which integers we have used in our current perm
        vector<bool> visited(n+1,false); 
        arrangePerm(1,n,visited,count);
        return count;
    }
};
