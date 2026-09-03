class Solution {
public:

    void solve(vector<int>&ds,vector<vector<int>>&result,int k,int n, int sum, int index)
    {
        
       
        if(ds.size()==k)
        {
            if(sum==n){
            result.push_back(ds);
            return;}
        }
       

        for(int i=index;i<=9;i++)
        {
            if(sum+i>n)break;
            ds.push_back(i);
           
            solve(ds,result, k, n,sum + i, i + 1);
           
            ds.pop_back();
            

        }
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>result;
        vector<int>ds;
        solve(ds,result, k, n,0,1);
        return result;

        
        
    }
};