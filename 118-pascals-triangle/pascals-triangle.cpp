class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=1;i<=numRows;i++)
        {
            ans.push_back(genraterow( i));
        }
        return ans;
    }

        vector<int>genraterow(int row){
        long long ans=1;
        vector<int>ansrow;
        ansrow.push_back(ans);
        for(int col=1;col<row;col++)
        {
            ans=ans*(row-col);
            ans=ans/col;
            ansrow.push_back(ans);
        } 
        return ansrow;
    }

        
    };
