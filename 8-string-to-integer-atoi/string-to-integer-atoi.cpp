class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int n=s.length();
        int sign=1;

        while(i<n &&  s[i]==' ')
        {
            i++;
        }

        if(i<n&&(s[i]=='-'||s[i]=='+'))
        {
            sign=(s[i]=='-')?-1:1;
            i++;
        }

        long  long digit=0;
            long long  res=0;
        while(i<n&&isdigit(s[i]))
        {

            digit=s[i]-'0';

            res=res*10+digit;
            if(res*sign>INT_MAX )
            {
                return INT_MAX;
            }
            if(res*sign<INT_MIN)
            {
                return INT_MIN;
            }
            i++;


            
        }
        return sign*res;
        

        
        
    }
};