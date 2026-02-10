class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int m=0;
        for(int i=0;i<nums.size();i++)
        {   
            set<int> e;
            set<int> o;
            for(int j=i;j<nums.size();j++)
            {
                if(nums[j]%2==0)
                {
                    e.insert(nums[j]);
                }
                else
                {
                    o.insert(nums[j]);
                }
                if(e.size()==o.size())
                {
                    m=max(m,(j-i+1));
                }
            }
        }
        return m;
        
    }
};