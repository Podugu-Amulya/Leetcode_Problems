class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        set<int> s;
        for(int i=0;i<nums.size();i++)
        {
            
                for(int k=nums[i][0];k<=nums[i][1];k++)
                {
                    s.insert(k);
                }
            
        }
        return s.size();
        
    }
};