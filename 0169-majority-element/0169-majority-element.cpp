class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        map<int,int> mp;
        int nu;
        for(int i:nums)
        {
            mp[i]++;
        }
        for(auto& [k,v]:mp)
        {
            if(v >(n/2))
            nu=k;
        }
        return nu;
        
    }
};