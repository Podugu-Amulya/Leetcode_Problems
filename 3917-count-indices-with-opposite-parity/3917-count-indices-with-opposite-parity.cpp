class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        vector<int> res;
        if(nums.size()==1)
        {
            return {0};
        }
        for(int i=0;i<nums.size()-1;i++)
        {   
            int c=0;
            int n=nums[i]%2;
            for(int j=i+1;j<nums.size();j++)
            {  
              if((n==0 && nums[j]%2!=0) || (n!=0 && nums[j]%2==0))
              {
                  c++;
              }
            }
            res.push_back(c);
        }
        res.push_back(0);
        return res;
    }
};