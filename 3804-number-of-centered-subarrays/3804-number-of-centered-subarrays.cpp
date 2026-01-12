class Solution {
public:
    int centeredSubarrays(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++)
        {   
            int s=0;
            vector<int> res;
            for(int j=i;j<nums.size();j++)
            {   
                res.push_back(nums[j]);
                s=s+nums[j];
                if(find(res.begin(),res.end(),s) !=res.end())

                {
                    c=c+1;
                }
            }
        }
        return c;
        
    }
};