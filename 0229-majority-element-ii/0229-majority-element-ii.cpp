class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> mp;
        vector<int> res;
        for(int i:nums)
        {
            mp[i]++;
        }
        int n=nums.size()/3;
        for(auto& [k,v]:mp)
        {
           if(v>n)
           {
            res.push_back(k);
           }
        }
        return res;
    }
};