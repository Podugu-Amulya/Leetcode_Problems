class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st;
        vector<int> res;
        
        for(int i:nums)
        {
            if(st.count(i)==0)
            {
                st.insert(i);
                res.push_back(i);
            }
        }
        for(int i=0;i<res.size();i++)
        {
            nums[i]=res[i];
        }
       return st.size();
    }
};