class Solution {
public:
    int binaryGap(int n) {
         
        string st;
        while(n!=0)
        {
            int rem=n%2;
            st=st+to_string(rem);
            n=n/2;
        }
        reverse(st.begin(),st.end());
        int m=0;
        int pre=-1;
        for(int i=0;i<st.size();i++)
        {
            if(st[i]=='1')
            {   if(pre != -1)
                {
                     m=max(m,(i-pre));
                }
                pre=i;
            }
           
        }
        return m;
    }
};