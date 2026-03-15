class Solution {
public:
    long long gcd(long long a,long long b)
    {
        while(b!=0)
        {
            long long temp=b;
            b=a%b;
            a=temp;

        }
        return a;
    }
    long long gcdSum(vector<int>& nums) {
        
        vector<long long> v;
        long long mx=nums[0];
        for(int i=0;i<nums.size();i++)
        {   
            mx=max(mx,(long long)nums[i]);
            long long k=gcd(nums[i],mx);
            v.push_back(k);
        }
        sort(v.begin(),v.end());
        int i=0;
        int j=v.size()-1;
        long long s=0;
        while(i<j)
        {
            s+=gcd(v[i],v[j]);
            i++;
            j--;

        }
        return s;


        
    }
};