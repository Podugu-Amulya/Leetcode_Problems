class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.begin(),nums.end(),greater<int>());
        long long s=0;
        
        for(int i=0;i<k;i++)
        {  
             if(mul<=0)
             {
                s=s+nums[i];
             }
             else
             {
             s=s+(long long)nums[i]*mul;
             mul--;
             }
            
        }
        return s;
    }
};