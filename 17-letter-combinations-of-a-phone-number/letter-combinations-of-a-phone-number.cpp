class Solution {
public:

    void solve(string ds,vector<string>&result,string digits,int index,vector<string>mapping)
    {
        if(index==digits.size())
        {
            result.push_back(ds);
            return;
        }
      string letters=mapping[digits[index]-'0'];

      for( char ch:letters)
      {
        ds.push_back(ch);
         solve(ds,result, digits, index+1,mapping);
         ds.pop_back();
        
      }
    }
    vector<string> letterCombinations(string digits) {
         if(digits.empty())
            return {};

        vector<string> mapping = {
            "",
            "",
            "abc",  
            "def",  
            "ghi",  
            "jkl",  
            "mno",
            "pqrs", 
            "tuv", 
            "wxyz"  
        };
        string ds;
        vector<string>result;
       
          solve(ds,result, digits, 0,mapping);
          return result;

        
    }
};