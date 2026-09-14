class Solution {
public:

    vector<int>findnse(vector<int>& arr)
    {
        int n=arr.size();
        vector<int>nse(n);
        stack<int>st;
        int mod=(int)(1e9+7);
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty()&&arr[st.top()]>=arr[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                nse[i]=n;

            }
            else{
               
                 nse[i] = st.top();
                }
            
            st.push(i);
        }
        return nse;
        }

    
     vector<int>findpse(vector<int>& arr)
    {
        int n=arr.size();
        vector<int>pse(n);
        stack<int>st;
        int mod=(int)(1e9+7);
        for(int i=0;i<n;i++)
        {
            while(!st.empty()&&arr[st.top()]>arr[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                pse[i]=-1;

            }
            else{
                
                 pse[i] = st.top();
                    }
            st.push(i);
            }
        return pse;
    }
        
    
    int sumSubarrayMins(vector<int>& arr) {
        long long left,right,total=0;
        int n=arr.size();
        vector<int> nse=findnse(arr);
        vector<int> pse= findpse(arr);
       
        int mod=(int)(1e9+7);
        for(int i=0;i<n;i++)
        {
            left=i-pse[i];
            right=nse[i]-i;
            total+=(right*left*1LL*arr[i])%mod;
            total%=mod;
        }
        return total;
        
    }
};