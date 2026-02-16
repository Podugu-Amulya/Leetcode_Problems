class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        map<int,int> mp;
        for(int i:bulbs)
        {
            mp[i]++;
        }
        vector<int> res;
        for(auto& [k,v]:mp)
        {
            if(v%2 !=0)
            {
                res.push_back(k);
            }
        }
        return res;
    }
};