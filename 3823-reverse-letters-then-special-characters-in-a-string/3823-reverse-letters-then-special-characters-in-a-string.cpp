class Solution {
public:
    string reverseByType(string s) {
        vector<char> a;
        vector<char> b;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] >='a' && s[i] <='z')
            {
                a.push_back(s[i]);
            }
            else
            {
                b.push_back(s[i]);
            }
        }
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        string st="";
        int ai=0;
        int bi=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] >='a' && s[i] <='z')
            {
                st=st+a[ai];
                ai++;

            }
            else
            {
                 st=st+b[bi];
                bi++;
            }
        }
        return st;
    }
};