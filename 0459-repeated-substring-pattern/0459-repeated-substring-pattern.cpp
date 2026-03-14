class Solution {
public:
    bool repeatedSubstringPattern(string s) {
       string st=s+s;
       st.erase(0,1);
       st.erase(st.size()-1,1);
       if(st.find(s) != string::npos)
       {
        return true;
       }
        return false;

    }
};