class Solution {
public:

    void solve(vector<int>& nums,int index,vector<int>&ds,vector<vector<int>>&result)
    {
       if(index==nums.size()){
            result.push_back(ds);
            return;
       }
        ds.push_back(nums[index]);
             solve(nums, index+1,ds,result);
             ds.pop_back();
            


        int idx=index+1;
        while(idx<nums.size() && nums[idx]==nums[idx-1])idx++;
         solve(nums, idx,ds,result);
    }



        
        
         
       

    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>ds;
        vector<vector<int>>result;
        sort(nums.begin(),nums.end());
         solve(nums, 0,ds,result);
         return result;

        
    }
};