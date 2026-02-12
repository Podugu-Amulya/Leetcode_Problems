class Solution {
public:
    int longestBalanced(string s) {
        map<char,int> mp;
        int m=0;
        for(int i=0;i<s.size();i++)
        {   mp={};
            for(int j=i;j<s.size();j++)
            {
                 mp[s[j]]++;
                 int c=mp[s[j]];
                 bool flag=true;
                 for(auto& [k,v]:mp)
                 {
                    if(v!=c)
                    {
                        flag=false;
                        break;
                    }
                 }
                 if(flag)
                 {
                    m=max(m,(j-i+1));
                 }
            }
        }
        return m;
    }
};