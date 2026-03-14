class Solution {
public:
    string convertToBase7(int num) {
        if(num==0)
        {
           return "0";
        }
        int n;
        if(num<0)
        {
            n=num*-1;
        }
        else
        {
            n=num;
        }
        string st="";
        while(n!=0)
        {
            int res=n%7;
            st=st+to_string(res);
            n=n/7;
        }
        reverse(st.begin(),st.end());

        if(num<0)
        {
            string m="-";
            st=m+st;
            return st;
        }
        return st;
    }
};