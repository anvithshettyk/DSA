class Solution {
public:

    void solve(int index,vector<int>&ds, vector<vector<int>>&result,vector<int>& candidates,int target){
       
        
        if(index==candidates.size()){
            if(target==0)
            {
               result.push_back(ds);
            }
                    return;
        }
        if( candidates[index]<=target)
        {
            ds.push_back( candidates[index]);
            solve( index,ds, result,candidates,target-candidates[index]);
            ds.pop_back();

        }
        solve( index+1,ds, result,candidates,target);

       
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int index=0;
      
        int n=candidates.size();
        vector<int>ds;
        vector<vector<int>>result;
      solve( index,ds, result,candidates,target);
        
         return result;
         



        
    }
};