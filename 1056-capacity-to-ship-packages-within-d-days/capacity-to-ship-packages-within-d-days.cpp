class Solution {
public:

    int func(vector<int>weights,int capacity)
    {
        int days=1,total=0;
        for(int i=0;i<weights.size();i++)
        {
            if(total+weights[i]>capacity)
            {
                days=days+1;
                total=weights[i];
            }
            else
            {
                total+=weights[i];
            }
        }
        return days;
    }

    
    
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int reqdays=func(weights,mid);
            if(reqdays<=days)
            {
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
        
    }
};