class Solution {
public:
    string reversePrefix(string s, int k) {
        string st="";
        int n=s.size();
        int c=0;
        int ind;
        for(int i=0;i<s.size();i++)
        {
           st=st+s[i];
           c=c+1;
           ind=i;
           if(c==k)
           {
            break;
           }
        }
        reverse(st.begin(),st.end());
        string str=s.substr(ind+1,n-(ind+1));
        st=st+str;
        return st;
    }
};