class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)
        {
            return 1;
        }
        string st="";
        while(n!=0)
        {
            int rem=n%2;
            st=st+to_string(rem);
            n=n/2;
        }
        reverse(st.begin(),st.end());
        for(int i=0;i<st.size();i++)
        {
            if(st[i]=='1')
            {
                st[i]='0';
            }
            else
            {
                st[i]='1';
            }
        }
       int num=0;
       for(int i=0;i<st.size();i++)
       {
          int deci=st[i]-'0';
          num=num*2+deci;
       }
        return num;
        
    }
};