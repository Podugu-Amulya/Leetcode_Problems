class Solution {
public:
    int minSubArrayLen(int t, vector<int>& nums) {
        int r=0;
        int l=0;
        int m=INT_MAX;
        long long s=0;
        for(int r=0;r<nums.size();r++)
        {
             s=s+nums[r];
             while(s >= t)
             {
                m=min(m,(r-l+1));
                s=s-nums[l];
                l++;
             }
        }
        return m==INT_MAX? 0:m;
    }
};