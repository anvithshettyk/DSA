class Solution {
public:
    bool canJump(vector<int>& nums) {
        int goal=nums.size();
        int goal2=goal-1;
        for(int i=goal2-1;i>=0;i--)
        {
            if(i+nums[i]>=goal2)
            {
                goal2=i;
            }
            
        }
        if(goal2==0)return true;
        else return false;
    
    }
};