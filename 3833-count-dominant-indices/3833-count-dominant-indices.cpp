class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int cn=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            int k=nums[i];
            int avg;
            int s=0;
            int c=0;
            for(int j=i+1;j<nums.size();j++)
            {
                s=s+nums[j];
                c++;
            }
            avg=s/c;
            if(k>avg)
            {
                cn++;
            }
        }
        return cn;
    }
};