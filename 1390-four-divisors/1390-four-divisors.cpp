class Solution {
   
public:
    int sumFourDivisors(vector<int>& nums) {
         int ms=0;
        for(int i=0;i<nums.size();i++)
        { 
              int c=0;
              int s=0;
            for(int j=1;j*j<=nums[i];j++)
            {
               if(nums[i]%j==0)
               {
                c=c+1;
                s=s+j;
                if(j!=nums[i]/j)
                {
                    c=c+1;
                    s=s+nums[i]/j;
                }
                
               }
               
               if(c>4)
               {
                break;
               }
            }
            if(c==4)
            {
                ms+=s;
                
            }
        }
        return ms;
    }
};