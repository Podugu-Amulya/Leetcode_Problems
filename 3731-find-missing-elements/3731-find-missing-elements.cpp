class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> res;
        sort(nums.begin(),nums.end());
        int a=nums[0];
        int b=nums[nums.size()-1];
        for(int i=a;i<b;i++)
        {
            if(find(nums.begin(),nums.end(),i)==nums.end())
            {
                res.push_back(i);
            }
        }
        return res;
        
    }
};