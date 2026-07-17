class Solution {
public:
    int passwordStrength(string st) {
        map<char,int> mp;
        for(char ch:st)
        {
            mp[ch]++;
        }
        int s=0;
        for(auto& [k,v]:mp)
        {
            if(k>='a' && k<='z')
            {
                s=s+1;
            }
            else if(k>='A' && k<='Z')
            {
                s+=2;
            }
            else if(k>='0' && k<='9')
            {
                s+=3;
            }
            else
            {
                s+=5;
            }
        }
        return s;
    }
};