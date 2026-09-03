class Solution {
public:
    void solve(vector<int>& nums,int index,vector<int>&ds,  vector<vector<int>>&result)
    {
        if(index==nums.size())
        {
           
            result.push_back(ds);
            return;
        }

        ds.push_back(nums[index]);
         solve( nums, index+1,ds,result);
        ds. pop_back();
         solve( nums, index+1,ds,result);


    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ds;
        vector<vector<int>>result;
         solve( nums,0,ds,result);
         return result;

        

        
    }
};