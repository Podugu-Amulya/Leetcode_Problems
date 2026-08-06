class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        set<vector<int>> st;
        for(int i=0;i<n-2;i++)
        {   
            int l=i+1;
            int r=nums.size()-1;
            while(l<r)
            {
                int s=nums[i]+nums[l]+nums[r];
                if(s==0)
                {
                    
                    st.insert({nums[i],nums[l],nums[r]});
                    l++;
                    r--;

                }
                else if(s<0)
                {
                    l++;
                }
                else
                {
                    r--;
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