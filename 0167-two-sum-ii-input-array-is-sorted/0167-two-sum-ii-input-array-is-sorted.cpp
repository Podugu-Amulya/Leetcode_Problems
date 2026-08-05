class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        
        int n=nums.size();
        int l=0;
        int r=nums.size()-1;
        while(l<r)
        {
            if(nums[l]+nums[r]==t)
            {
                return {l+1,r+1};
                break;
            }
            else if(nums[l]+nums[r]>t)
            {
                r--;
            }
            else
            {
                l++;
            }

        }
        return {0,0};
        
    
    }
};