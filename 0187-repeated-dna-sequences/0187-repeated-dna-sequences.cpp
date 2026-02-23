class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        map<string,int> mp;
        int l=0;
        int r=0;
        while(r<s.size())
        {
            if((r-l+1)==10)
            {
                string st=s.substr(l,10);
                mp[st]++;
            }
            if((r-l+1) >10)
            {
                l++;
                r--;
            }

            r++;
        }
        vector<string> res;
        for(auto& [k,v]:mp)
        {
            if(v > 1)
            {
                 res.push_back(k);
            }
        }
        return res;
    }
};