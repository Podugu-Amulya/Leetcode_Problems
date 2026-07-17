class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(int i=0;i<nums.size();)
        {
            if(mp[nums[i]]>k)
            {
               // nums.erase(remove(nums.begin(),nums.end(),nums[i]),nums.end());
               nums.erase(nums.begin()+i);
                mp[nums[i]]--;
            }
            else
            {
                i++;
            }
        }
        return nums;
    }
};