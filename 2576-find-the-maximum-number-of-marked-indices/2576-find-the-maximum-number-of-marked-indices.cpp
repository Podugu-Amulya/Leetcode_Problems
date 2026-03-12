class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int i = 0, j = (n + 1) / 2;
        int count = 0;
        while (i < (n + 1) / 2 && j < n) {
            if (2 * nums[i] <= nums[j]) {
                count += 2;
                i++;
                j++;
            } else {
                j++;
            }
        }
        return count;
    }
};