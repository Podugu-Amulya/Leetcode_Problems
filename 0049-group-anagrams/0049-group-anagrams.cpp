class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        map<string,vector<string>> mp;

        for(auto i:strs)
        {
            string st=i;
            sort(st.begin(),st.end());
            mp[st].push_back(i);
        }

        for(auto& [k,v]:mp)
        {
            res.push_back(v);
        }

        return res;
    }
};