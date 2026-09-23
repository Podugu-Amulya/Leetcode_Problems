class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& nums, vector<int>& b) {
         vector<vector<int>> res;
       for(int i=0;i<nums.size();i++)
       {
         if(nums[i][1] < b[0])
         {
            res.push_back(nums[i]);
         }
         else if(nums[i][0] <=b[1])
         {
             b[0]=min(b[0],nums[i][0]);
             b[1]=max(b[1],nums[i][1]);
         }
         else
         {
            res.push_back(b);
            b=nums[i];
            for(int j=i;j<nums.size();j++)
            {
                res.push_back(nums[j]);
            }
            return res;
         }
       }
       res.push_back(b);
       return res;
    }
};