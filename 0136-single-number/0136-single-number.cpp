class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> mp;
        for(int i:nums)
        {
            mp[i]++;
        }
        int n;
        for(auto& [k,v]:mp)
        {
            if(v==1)
            {
                n=k;
            }
        }
        return n;
    }
};