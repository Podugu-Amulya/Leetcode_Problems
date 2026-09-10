class Solution {
public:
    int hammingWeight(int n) {
        string st=bitset<32>(n).to_string();
        int c=0;
        for(int i=0;i<st.size();i++)
        {
            if(st[i]=='1')
            {
                c+=1;
            }
        }
        return c;
    }
};