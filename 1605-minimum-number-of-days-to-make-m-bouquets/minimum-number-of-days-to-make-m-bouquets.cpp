class Solution {
public:
    
    
    
    bool fun(vector<int>&bloomDay,int days,long long m,long long k)
    {
       

       
        int sum=0;
         int no_of_blooms=0;
        int n=bloomDay.size();
        for(int i=0;i<n;i++)
        {    
            if(bloomDay[i]<=days)
            {
               sum++;
            }
            else
            {
                no_of_blooms+=(sum/k);
                sum=0;
            }
           
           

        }
        no_of_blooms+=(sum/k);
        return (no_of_blooms>=m);
            
    }
       

    


    int minDays(vector<int>& bloomDay, long long m, long long k) {
        int low=*min_element(bloomDay.begin(),bloomDay.end());;
        int high=*max_element(bloomDay.begin(),bloomDay.end());

        int ans=0;
        if(k*m>bloomDay.size())
        return -1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(fun(bloomDay,mid,m,k)==true)
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