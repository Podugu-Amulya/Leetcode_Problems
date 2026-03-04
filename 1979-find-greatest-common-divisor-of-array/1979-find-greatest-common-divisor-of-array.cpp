class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int f=nums.front();
        int l=nums.back();
        set<int> st1;
        set<int> st2;
        for(int i=1;i<=f;i++)
        {
            if (f%i==0)
            st1.insert(i);
        }
        for(int i=1;i<=l;i++)
        {
            if (l%i==0)
            st2.insert(i);
        }
        vector<int> result;
        set_intersection(
        st1.begin(), st1.end(),
        st2.begin(), st2.end(),
        back_inserter(result)
    );
       int k= *std::max_element(result.begin(),result.end());
       return k;
    }
};