class Solution {
public:

    vector<int> num(int n)
    {   
        vector<int> a;
        while(n!=0)
        {
            int digit=n%10;
            a.push_back(digit);
            n=n/10;
        }
        reverse(a.begin(),a.end());
        return a;
    }
    vector<int> separateDigits(vector<int>& nums) {
        vector<vector<int>> res;
        for(int i=0;i<nums.size();i++)
        {
            res.push_back(num(nums[i]));
        }
        vector<int> b;
        for(int i=0;i<res.size();i++)
        {
            for(int j=0;j<res[i].size();j++)
            {
                b.push_back(res[i][j]);
            }
        }
        return b;
    }
};