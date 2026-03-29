class Solution {
public:
    int firstMatchingIndex(string s) {
       int l=0;
       int r=s.size()-1;
       while(l < r)
       {
        if(s[l]==s[r])
        {
            return l;
        }
        l++;
        r--;
       }
       if(s.size()%2 !=0)
       {
        return l;
       }
       return -1;
        
    }
};