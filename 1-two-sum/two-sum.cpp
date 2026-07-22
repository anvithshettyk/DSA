class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mapp;
        int n=nums.size();
        for(int i=0;i<n;i++){
        int num=nums[i];
        int moreneeded=target-num;
        if(mapp.find(moreneeded)!=mapp.end())
        {
            return {mapp[moreneeded],i};
        }
        mapp[num]=i;
    }
    return {-1,-1};
    }
};












    






        
       