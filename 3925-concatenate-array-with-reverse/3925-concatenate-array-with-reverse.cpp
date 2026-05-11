class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> res;
        res.insert(res.end(),nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        res.insert(res.end(),nums.begin(),nums.end());
        return res;
    }
};