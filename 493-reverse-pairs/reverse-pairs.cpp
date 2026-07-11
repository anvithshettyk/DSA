class Solution {
public:
    int rec(vector<int>& nums,vector<int>& temp,int low,int high){
        if(low>=high){
            return 0;
        }
        int mid=low+(high-low)/2;
        int count=rec(nums,temp,low,mid);
        count+=rec(nums,temp,mid+1,high);
        int l=low,r=mid+1;

        while(l<=mid){
            while(r<=high&&nums[l]>2LL*nums[r]){
                r++;
            }
            count+=(r-(mid+1));
            l++;
        }
        
        l=low,r=mid+1;
        int k=low;
        while(l<=mid&&r<=high){
            if(nums[l]<=nums[r]){
                temp[k++]=(nums[l++]);
            }
            else{
                temp[k++]=(nums[r++]);
            }
        }
        while(l<=mid) temp[k++]=(nums[l++]);
        while(r<=high) temp[k++]=(nums[r++]);


        for(int i=low;i<=high;i++) {
            nums[i]=temp[i];
        }
        return count;
    }
    int reversePairs(vector<int>& nums) {
        vector<int> temp(nums.size());
        return rec(nums,temp,0,nums.size()-1);
    }
};
