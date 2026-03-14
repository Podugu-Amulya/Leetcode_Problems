class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string st=a;
        int c=1;
        if(a.find(b) != string::npos)
        {
            return c;
        }
        while(st.size() < b.size())
        {
            st=st+a;
            c++;
        }
        if(st.find(b) != string::npos)
        {
            return c;
        }
        st=st+a;
        if(st.find(b) != string::npos)
        {  c++;
            return c;
        }


        return -1;
       
        
    }
};