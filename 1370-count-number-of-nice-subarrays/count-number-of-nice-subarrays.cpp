class Solution {
public:

 int numsSubarraysWithSum(vector<int>& nums, int goal) {
        if(goal<0)
        {
            return 0;
        }

        int l=0,r=0,sum=0,cnt=0;
        while(r<nums.size())
        {
            sum+=(nums[r]%2);
            while(sum>goal)
            {
                sum-=(nums[l]%2);
                l++;

            }
            cnt=cnt+(r-l+1);
            r++;
        }
        return cnt;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        int fun1=numsSubarraysWithSum(nums,k);
        int fun2=numsSubarraysWithSum(nums,k-1);
        int ans=fun1-fun2;
        return ans;
        
    }
};