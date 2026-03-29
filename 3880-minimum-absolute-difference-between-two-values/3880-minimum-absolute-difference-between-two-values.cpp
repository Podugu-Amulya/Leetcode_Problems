class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int m=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(nums[i]==1 && nums[j]==2)
                {
                    m=min(m,abs(i-j));
                }
            }
        }
        return m ==INT_MAX ? -1 :m;

        
    }
};