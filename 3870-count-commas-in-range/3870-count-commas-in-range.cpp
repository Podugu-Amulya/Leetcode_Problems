class Solution {
public:
    int countCommas(int n) {
        string st=to_string(n);
        if(st.size()<=3)
        {
            return 0;
        }
        return (n-1000)+1;
        
    }
};