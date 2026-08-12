class Solution {
public:
    int mySqrt(int x) {
        if(x==0)
        {
            return 0;
        }
        int ans;
        for(int i=1;i<=x/2;i++)
        {
            if(1LL*i*i==x)
            {
                return i;
            }
            else if(1LL*i*i <x)
            {
                ans=i;
            }
            else if(1LL*i*i > x)
            {
                break;
            }
        }
        return ans;

    }
};