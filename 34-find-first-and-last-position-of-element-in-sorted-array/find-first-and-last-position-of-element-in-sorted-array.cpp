class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int lb=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int up=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        if(lb==n||nums[lb]!=target)
        {
            return{-1,-1};
        }
        else
        {
            return {lb,up-1};
        }
       
       
     }

   

        
     
    
};

        
