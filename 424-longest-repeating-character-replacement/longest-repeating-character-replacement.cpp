class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,r=0,maxf=0,maxlen=0;
        unordered_map<char,int>hash;
       
        int n=s.size();
        while(r<n)
        {
            hash[s[r]]++;
            maxf=max(maxf,hash[s[r]]);
            if(((r-l+1)-maxf)>k)
            {
                hash[s[l]]--;
                l++;
            }
            else{
                maxlen=max(maxlen,r-l+1);

            }
            r++;

        }
        return maxlen;
        
    }
};