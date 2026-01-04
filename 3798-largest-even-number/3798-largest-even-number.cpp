class Solution {
public:
    string largestEven(string s) {
       
        int n=s.size();
        int ld=s[n-1];
        if(ld%2==0)
        {
            return s;
        }
        if(s=="1")
        {
            return "";
        }
       for(int i=s.size()-1;i>0;i--)
       {
        if(s[i]=='1' && s[i-1]=='2')
        {
            return s.substr(0,i);
        }
       }
       return "";
    }
};