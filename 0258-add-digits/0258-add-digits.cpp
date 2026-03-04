class Solution {
public:
    int addDigits(int num) {
        int s;
        while(num>=10)
        {
            s=0;
        while(num!=0)
        {
             int rem=num%10;
             s=s+rem;
             num=num/10;

        }
        num=s;
        }
        return num;

        
        
        

        
    }
};