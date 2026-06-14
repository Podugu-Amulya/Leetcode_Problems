class Solution {
public:
    bool checkGoodInteger(int n) {
        int s=0;
        int k=0;
        while(n!=0)
        {
            int rem=n%10;
            s=s+rem;
            k=k+pow(rem,2);
            n=n/10;

        }
        return (k-s)>=50;
        
    }
};