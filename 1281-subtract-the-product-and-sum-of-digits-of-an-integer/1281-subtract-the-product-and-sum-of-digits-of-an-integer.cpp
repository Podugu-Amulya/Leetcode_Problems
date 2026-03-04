class Solution {
public:
    int subtractProductAndSum(int n) {
        int temp=n;
        int p=1;
        int s=0;
        while(n!=0)
        {
            int rem=n%10;
            s=s+rem;
            n=n/10;
        }
        while(temp!=0)
        {
          int r=temp%10;
          p=p*r;
          temp=temp/10;
        }
        return p-s;

        
    }
};