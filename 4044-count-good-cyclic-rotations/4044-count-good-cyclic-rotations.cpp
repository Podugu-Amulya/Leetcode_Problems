class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
       int c=0;
       int n=nums.size();
       long long f=0;
       long long s=0;
       for(int i=0;i<n;i++)
       {
            if(i<n/2) f+=nums[i];
            else s+=nums[i];
       }
       for(int i=0;i<n;i++)
       {
        if(f> s) c++;
        f=f-nums[i];
        f=f+nums[(i+n/2)%n];

        s=s-nums[(i+n/2)%n];
        s+=nums[i];
       }
       return c;
    }
};