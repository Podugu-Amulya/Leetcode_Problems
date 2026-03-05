class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int r=0;
        int m=0;
        map<int,int> mp;
        while(r < s.size())
        {   

            mp[s[r]]++;
            if(mp[s[r]]==1)
            {   
                m=max(m,(r-l+1));
            }
            while(mp[s[r]] >1 )
            {
                mp[s[l]]--;
                if(mp[s[l]]==0)
                {
                    mp.erase(s[l]);
                    
                }
                l++;
            
                
            }
            r++;

        }
        return m;
        
    }
};