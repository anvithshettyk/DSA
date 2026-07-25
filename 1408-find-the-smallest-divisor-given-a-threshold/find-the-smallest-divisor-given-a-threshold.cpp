class Solution {
public:

    int func(vector<int>&nums,int m)
    {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=ceil((double)nums[i]/(double)m);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
    int low=1;
    int high=*max_element(nums.begin(),nums.end());

    while(low<=high)
    {
        int mid=low+(high-low)/2;
        int greater=func(nums,mid);
        if(greater<=threshold)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return low;

        
    }
};