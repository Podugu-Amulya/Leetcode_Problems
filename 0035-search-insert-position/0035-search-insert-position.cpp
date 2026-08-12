class Solution {
public:
    int searchInsert(vector<int>& nums, int t) {
        int l=0;
        int r=nums.size()-1;
        while(l<=r)
        {  
            int mid=(l+r)/2;
           if(nums[mid]==t)
           {
               return mid;
           }
           else if(nums[mid]>t)
            {
                r=mid-1;
            }
            else if(nums[mid]<t)
            {
                l=mid+1;
            }
        }
        return r+1;
    }
};