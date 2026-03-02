class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        vector<int> res;
        sort(nums.begin(),nums.end());
        map<int,int> mp;
        for(int i:nums)
        {
            mp[i]++;
        }
       
      
        int n=mp[nums[0]];
        for(auto& [k,v]:mp)
        {
            if(v != n)
            {
                res.push_back(nums[0]);
                res.push_back(k);
                return res;
                
            }
        }
        vector<int> a={-1,-1};
        return a;
        
    }
};