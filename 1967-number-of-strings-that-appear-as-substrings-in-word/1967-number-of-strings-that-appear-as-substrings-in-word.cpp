class Solution {
public:
    int numOfStrings(vector<string>& p, string st) {
        int c=0;
        for(int i=0;i<p.size();i++)
        {
            if(st.find(p[i])!= string::npos)
            {
                c++;
            }
        }
        return c;
    }
};