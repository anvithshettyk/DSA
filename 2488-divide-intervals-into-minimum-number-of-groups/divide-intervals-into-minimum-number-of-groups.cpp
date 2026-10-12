class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        vector<int>start,end;
        int n=intervals.size();
        
        for(int i =0;i<n;i++)
        {
            start.push_back(intervals[i][0]);
            end.push_back(intervals[i][1]);

        }
        int i=0,j=0,cnt=0,maxcnt=0;
        
        sort(start.begin(),start.end());
        sort(end.begin(),end.end());

        while(i<n)
        {
            if(start[i]<=end[j])
            {
                cnt++;
                i++;
            }
            else{
                cnt--;
                j++;
            }
            maxcnt=max(maxcnt,cnt);
            
        }
        return maxcnt;
    }
};