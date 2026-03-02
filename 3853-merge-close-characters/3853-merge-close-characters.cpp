class Solution {
public:
    string mergeCharacters(string s, int k) {
        map<int,int> mp;
        for(int i=0;i<s.size();i++)
        {   
            if(mp.find(s[i]) == mp.end())
            {
            mp[s[i]]=i;
            }
            else
            {
                if(abs(i-mp[s[i]]) <=k)
                {
                   s.erase(s.begin()+i);
                   i--;
                }
                else
                {
                    mp[s[i]]=i;
                }
            }

        }
        return s;
    }
};