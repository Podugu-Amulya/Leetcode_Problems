class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int c1=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                c1++;
            }
            s[i]='0';
        }
        if(c1>1)
        {

        
        for(int i=0;i<c1-1;i++)
        {
            s[i]='1';
        }
        }
        s[s.size()-1]='1';
        return s;
        
    }
};