class Solution {
public:

    vector<string>result;
    void solve(string current,int n,int open ,int close){
      

        if(current.length()==2*n)
        {
             result.push_back(current);
            return;
        }
        if(open<n)
        {
        current.push_back('(');
            
        solve(current,n,open+1,close);
        current.pop_back();
        }
        if(close<open)
        {
        current.push_back(')');
            
        solve(current,n,open,close+1);
         current.pop_back();
        }

    }
    vector<string> generateParenthesis(int n) {

        int open=0;
        int close=0;
        string current="";

        solve(current,n,open,close);
        return result;
        
    }
};