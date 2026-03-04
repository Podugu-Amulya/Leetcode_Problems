

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for (int i = left; i <= right; i++) {
            int n = i;
            int temp = i;
            int c = 0;
            int digits = 0; 

            while (n != 0) {
                int rem = n % 10;
                digits++;
                if (rem != 0 && temp % rem == 0) {
                    c = c + 1;
                } else {
                    break;
                }
                n = n / 10;
            }

            if (c == digits) {
                res.push_back(temp);
            }
        }
        return res;
    }
};