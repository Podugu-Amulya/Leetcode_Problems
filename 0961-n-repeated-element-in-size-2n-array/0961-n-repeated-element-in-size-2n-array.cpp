class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int key=(nums.size())/2;
        map<int,int> mp;
        for(int i:nums)
        {
           mp[i]++;
        }
        for(auto& pair:mp)
        {
            if(pair.second==key)
            return pair.first;
        }
        return -1;
    }
};