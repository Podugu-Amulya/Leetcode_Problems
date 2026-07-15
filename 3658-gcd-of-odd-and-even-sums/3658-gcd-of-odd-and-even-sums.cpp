class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int e=n*(n+1);
        int o=n*n;
        return std::gcd(e,o);
        
    }
};