class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int t) {
        vector<vector<int>> res;
        set<vector<int>> st;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-3;i++)
        {
            for(int j=i+1;j<n-2;j++)
            {
                int l=j+1;
                int r=n-1;
                while(l<r)
                {
                     long long s=1LL*nums[i]+nums[j]+nums[l]+nums[r];
                     if(s==t)
                     {
                        st.insert({nums[i],nums[j],nums[l],nums[r]});
                        l++;
                        r--;
                     }
                     else if(s>t)
                     {
                        r--;
                     }
                     else
                     {
                        l++;
                     }
                }
            }
        }
        for(auto it:st)
        {
            res.push_back(it);
        }
        return res;
    }
};