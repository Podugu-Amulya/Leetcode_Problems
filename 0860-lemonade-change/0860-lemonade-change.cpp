class Solution {
public:
    bool lemonadeChange(vector<int>& nums) {
        int f=0,t=0;
       for(int i=0;i<nums.size();i++)
       {
        if(nums[i]==5)
        {
            f++;
        }
        else if(nums[i]==10)
        {
            if(f>0)
            {
                f--;
            }
            else
            {
                return false;
            }
            t++;
        }
        else
        {
            if(f>0 && t>0)
            {
                f--;
                t--;
            }
            else if(f>=3)
            {
               f-=3;
            }
            else
            {
                return false;
            }

        }
       }
       return true;
    }
};