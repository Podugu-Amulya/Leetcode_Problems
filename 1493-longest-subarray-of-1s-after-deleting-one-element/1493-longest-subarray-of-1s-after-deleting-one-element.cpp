class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l=0;
        int r=0;
        int m=0;
        int z=0;
        for(int r=0;r<nums.size();r++)
        {
            if(nums[r]==0)
            {
                z++;
            }
            if(z>1)
            {
                 if(nums[l]==0)
                 {
                    z--;
                 }
                 l++;
            }
            m=max(m,(r-l));
        }
        return m;
    }
};