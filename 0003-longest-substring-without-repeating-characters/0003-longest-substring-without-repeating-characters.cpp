class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> mp;
        int l=0;
        int r=0;
        int m=0;
        while(r<s.size())
        {
            mp[s[r]]++;
            while(mp[s[r]]>1)
            {
                mp[s[l]]--;
                if(mp[s[l]]==0)
                {
                    mp.erase(mp[s[l]]);
                }
                l++;
            }
            m=max(m,(r-l+1));
            r++;
        }
        return m;
    }
};