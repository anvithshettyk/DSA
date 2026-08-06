class Solution {
public:
    string frequencySort(string s) {
        string ans="";
        unordered_map<char,int>count;

        for(char ch:s)
        {
            count[ch]++;
        }

        vector<vector<char>>bucket(s.length()+1);
        for(auto[ch,counts]:count){
            bucket[counts].push_back(ch);
        }

        for(int freq=s.length();freq>0;--freq)
        {
            for (char ch : bucket[freq]) {
               
                ans.append(freq, ch);
            }
        }
        return ans;
        
    }
};