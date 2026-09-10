class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //vector<int> res;
        int res;
        int n=nums.size();
        for(int i=0;i<=n;i++)
        {
            if(find(nums.begin(),nums.end(),i) == nums.end())
            {
            res=i;
            break;
            }


        }
        return res;
    }
};