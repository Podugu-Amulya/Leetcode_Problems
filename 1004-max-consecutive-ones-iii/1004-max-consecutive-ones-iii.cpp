class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
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
            if(z>k)
            {
                if(nums[l]==0)
                {
                    z--;

                }
                l++;
            }
            m=max((r-l+1),m);
        }
       return m;
        
    }
};