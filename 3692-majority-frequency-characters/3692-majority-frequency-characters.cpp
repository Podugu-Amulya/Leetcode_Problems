class Solution {
public:
    string majorityFrequencyGroup(string s) {
        map<char,int> mp;
        for(char ch:s)
        {
            mp[ch]++;
        }
        map<int,int> m;
        for(auto& [k,v]:mp)
        {
            m[v]++;
        }
        int mx=0;
        int fre;
        for(auto& [k,v]:m)
        {
            if(v > mx || (v == mx && k > fre))
            {
                mx=v;
                fre=k;
            }
        }
        string st="";
        for(auto& [k,v]:mp)
        {
            if(v==fre)
            {
                st+=k;
            }
        }
        return st;
        
    }
};