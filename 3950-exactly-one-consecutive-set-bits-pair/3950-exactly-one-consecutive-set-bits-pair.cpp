class Solution {
public:
    bool consecutiveSetBits(int n) {
        if(n==0)
        {
            return false;
        }
       string st="";
       while(n!=0)
       {
          st=char(n%2+'0')+st;
          n=n/2;
       }
       int c=0;
       for(int i=0;i<st.size()-1;i++)
       {
        if(st[i]=='1' && st[i+1]=='1')
        {
            c++;
        }
       }
       return c==1;
    }
};