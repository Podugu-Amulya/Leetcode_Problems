class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        int n = nums.size();
        vector<long long> prefSum(n + 1, 0);
        vector<long long> suffixMin(n + 1, LLONG_MAX);

        for(int i = 0; i < n ; i++) {
            prefSum[i + 1] = nums[i] + prefSum[i];
        }

        for(int i = n - 1; i >= 0; i--) {
            suffixMin[i] = min((long long)nums[i], suffixMin[i + 1]);
        }

        long long ans = LLONG_MIN;
        for(int i = 0; i < n - 1; i++) {
            long long score = prefSum[i + 1] - suffixMin[i + 1];
            ans = max(ans, score);
        }

        return ans;
    }
};