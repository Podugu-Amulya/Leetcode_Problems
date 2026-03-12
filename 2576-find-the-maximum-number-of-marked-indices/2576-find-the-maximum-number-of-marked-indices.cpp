class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums) {
        set<int> st;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            for(int j=nums.size()/2;j<nums.size();j++)
            {
                if(2*nums[i] <=nums[j] && st.find(i) ==st.end() && st.find(j) ==st.end())
                {
                    st.insert(i);
                    st.insert(j);
                    break;
                }
            }
        }
        return st.size();
    }
};