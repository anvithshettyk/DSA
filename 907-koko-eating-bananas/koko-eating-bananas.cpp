class Solution {
public:
        long long fun(vector<int>piles,int hourly){
        long long totaltime=0;
        int n=piles.size();
            for(int i=0;i<n;i++)
            {
                totaltime+=ceil((double)piles[i]/(double)hourly);
            }
            return totaltime;
        }
       
    int minEatingSpeed(vector<int>& piles, int h) {
       
        int low=1;
        int n=piles.size();
        int high=*max_element(piles.begin(),piles.end());
        int ans=INT_MAX;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            long long time=fun(piles,mid);
            if(time<=h)
            {
                ans=mid;
                high=mid-1;
            }
            else
            low=mid+1;
        }
        return ans;
        }

        
      
    };
