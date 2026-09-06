class Solution {
public:
    int countRotations(string s, int k) {
        int ans=0;
        for(int j=0;j<s.size();j++)
        {
            string st="";
        for(int i=j;i<s.size();i++)
        {
            st+=s[i];
        }
        for(int i=0;i<j;i++)
        {
            st+=s[i];
        }
        int c=0;
        for(int i=0;i<st.size()-1;i++)
        {
            if(st[i]==st[i+1])
            {
                c++;
            }
        }
        if(c==k)
        {
            ans++;
        }
        }
        return ans;
    }
};