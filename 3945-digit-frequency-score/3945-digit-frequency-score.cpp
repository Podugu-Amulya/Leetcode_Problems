class Solution {
public:
    int digitFrequencyScore(int n) {
        map<int,int> mp;
        while(n!=0)
        {
            int rem=n%10;
            mp[rem]++;
            n=n/10;
        }
        int s=0;
        for(auto& [k,v]:mp)
        {
            s=s+(k*v);
        }
        return s;
        
    }
};