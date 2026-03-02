class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,string> mp1;
        map<string,char> mp2;
        vector<string> res;
        string word;
        stringstream ss(s);
        //if(pattern.size()!=res.size()) return false;
        while(ss >> word)
        {
            res.push_back(word);
        }
        if(pattern.size()!=res.size()) return false;
        for(int i=0;i<pattern.size();i++)
        {
            char c1=pattern[i];
            string c2=res[i];
            if(mp1.find(c1)==mp1.end() && mp2.find(c2)==mp2.end())
            {
                mp1[c1]=c2;
                mp2[c2]=c1;
            }
            else
            {
                if(mp1[c1] != c2 || mp2[c2] !=c1)
                {
                    return false;
                }
            }
        }
        return true;
    }
};