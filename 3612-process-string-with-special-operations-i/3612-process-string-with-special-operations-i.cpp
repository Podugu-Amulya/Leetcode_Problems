class Solution {
public:
    string processStr(string s) {
        string st;
        for(char ch:s)
        {
            if(ch>='a' && ch <='z')
            {
               st+=ch;
            }
            else if(ch=='*')
            {
                reverse(st.begin(),st.end());
                st.erase(0,1);
                reverse(st.begin(),st.end());
            }
            else if(ch=='#')
            {
                st+=st;
            }
            else if(ch=='%')
            {
                reverse(st.begin(),st.end());
            }
        }
        return st;
    }
};