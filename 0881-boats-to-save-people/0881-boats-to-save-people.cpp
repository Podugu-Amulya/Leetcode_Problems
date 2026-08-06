class Solution {
public:
    int numRescueBoats(vector<int>& nums, int lim) {
        int n=nums.size();
        int l=0;
        int r=nums.size()-1;
        int s=0;
        int c=0;
        sort(nums.begin(),nums.end());
        while(l<=r)
        {
            if(nums[l]+nums[r]<=lim)
            {
                l++;
                r--;
            }
            else
            {
                r--;
            }
            c++;
        }
        
        
        return c;
    }
};