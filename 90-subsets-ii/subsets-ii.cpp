class Solution {
public:

    void solve(vector<int>& nums,int index,vector<int>&ds,vector<vector<int>>&result)
    {
       
            result.push_back(ds);
        
        for(int i=index;i<nums.size();i++)
        {
            if(i!=index&&nums[i]==nums[i-1])continue;
            ds.push_back(nums[i]);
             solve(nums, i+1,ds,result);
             ds.pop_back();
              



        
        }
         
       

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>ds;
        vector<vector<int>>result;
        sort(nums.begin(),nums.end());
         solve(nums, 0,ds,result);
         return result;

        
    }
};