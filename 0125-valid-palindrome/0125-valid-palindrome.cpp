class Solution {
public:
    bool isPalindrome(string s) {
        string st="";

        for(char ch:s)
        {   
            ch=tolower(ch);
            if((ch>='a' && ch<='z') || (ch>='0' && ch<='9'))
            {
                st+=ch;
            }
        }
        string org=st;
        reverse(st.begin(),st.end());
        return st==org;
    }
};