class Solution {
public:
    bool canJump(vector<int>& nums) {
        
    //     if(nums.size()==1 && nums[0]==0)
    //     {
    //         return true;
    //     }
    //     int c=count(nums.begin(),nums.end(),0);
    //     if(c==1 && nums[nums.size()-1]==0)
    //     {
    //         return true;
    //     }
        
    //    if(find(nums.begin(),nums.end(),0) !=nums.end())
    //    {
    //     return false;
    //    } 
    //    return true;
         int ind=nums[0];
         for(int i=0;i<nums.size();i++)
         {
            if(ind >= nums.size()-1) 
            {
                return true;
            }
            if(nums[i]==0 && ind==i)
            {
                return false;
            }
            if(i+nums[i] > ind)
            {
                ind=i+nums[i];
            }
         }
         return true;
    }
};