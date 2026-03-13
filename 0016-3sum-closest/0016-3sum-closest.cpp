class Solution {
public:
    int threeSumClosest(vector<int>& nums, int t) {
        int m=INT_MAX;
        int num=0;
        for(int i=0;i<nums.size()-2;i++)
        {
            for(int j=i+1;j<nums.size()-1;j++)
            {
                for(int k=j+1;k<nums.size();k++)
                {
                    int s=nums[i]+nums[j]+nums[k];
                    int dif=abs(s-t);
                    if(dif<m)
                    {
                        m=dif;
                        num=s;
                    }
                }
            }
        }
        return num;
    }
};