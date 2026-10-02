class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {

        int maxSum = INT_MIN, currSum = 0;

        for(int num : nums){
            currSum = max(num, currSum + num);
            maxSum = max(maxSum, currSum);
        }

        int minSum = INT_MAX;
        currSum = 0;

        for(int num : nums){
            currSum = min(num, currSum + num);
            minSum = min(minSum, currSum);
        }

        int totalSum = 0;
        for(int num : nums){
            totalSum += num;
        }

        int maxCircular = totalSum - minSum;

        if(maxSum > 0){
            return max(maxSum, maxCircular);
        }

        return maxSum;
    }
};