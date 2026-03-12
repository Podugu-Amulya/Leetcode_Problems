class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int id, int vd) {
        vector<int> a={-1,-1};
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(abs(i-j)>=id  && abs(nums[i]-nums[j])>=vd)
                {
                    a[0]=i;
                    a[1]=j;
                    break;
                }
            }
        }
        return a;
        
    }
};