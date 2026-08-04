class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        {
            return 0;
        }
        set<int> st;
        for(int i=0;i<nums.size();i++)
        {
            st.insert(nums[i]);
        }
        int m=1;
        for(int i:st)
        {   
            int c=1;
            int x=i;
            if(st.count(i-1)==0)
            {
                while(st.count(x+1))
                {
                      c++;
                      x++;
                }
                m=max(m,c);
            }
        }
        return m;
    }
};