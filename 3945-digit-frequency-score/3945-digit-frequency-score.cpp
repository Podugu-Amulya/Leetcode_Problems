class Solution {
public:
    int digitFrequencyScore(int n) {
      //  map<int,int> mp;
      int s=0;
        while(n!=0)
        {
            int rem=n%10;
           // mp[rem]++;
           s=s+rem;
            n=n/10;
        }
        // int s=0;
        // for(auto& [k,v]:mp)
        // {
        //     s=s+(k*v);
        // }
        return s;
        
    }
};