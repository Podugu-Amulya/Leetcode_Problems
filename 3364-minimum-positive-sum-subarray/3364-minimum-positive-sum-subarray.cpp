class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        vector<int> res;
        int m=INT_MAX;
        int temp=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {    
           int s=0;
            for(int j=i;j<nums.size();j++)
            {   
                   s=s+nums[j];
                if((j-i+1) >=l && (j-i+1) <=r && s>0) 
                {
                   
                    m=min(m,s);
                }

            }
        }
        return m==temp? -1 :m;
        
    }
};