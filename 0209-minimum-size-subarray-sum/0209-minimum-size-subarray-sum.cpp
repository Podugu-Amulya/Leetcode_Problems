class Solution {
public:
    int minSubArrayLen(int t, vector<int>& nums) {
        int l=0;
        
        int n=nums.size();
        int m=INT_MAX;
        int s=0;
        
        for(int r=0;r<n;r++)
        {
            s=s+nums[r];
            while(s>=t)
            {   m=min(m,(r-l+1));
                s=s-nums[l];
                l++;
            }
        }
        return m==INT_MAX? 0 :m;
    }
};