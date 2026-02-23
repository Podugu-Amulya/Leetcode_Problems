class Solution {
public:
    bool hasAllCodes(string s, int k) {
        set<string> st;
        int l=0;
        int r=0;
        for(int r=0;r<s.size();r++)
        {
           
            if((r-l+1) >k)
            {
               l++;
            }
             if((r-l+1)==k){
                st.insert(s.substr(l,k));
            }
            
        }
        if(st.size()==pow(2,k))
        {
            return true;
        }
        return false;

    }
};