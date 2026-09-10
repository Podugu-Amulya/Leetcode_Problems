class Solution {
public:
    string addBinary(string a, string b) {
       int i=a.size()-1;
       int j=b.size()-1;
       int c=0;
       string st="";
       while(i>=0 || j>=0 || c)
       {
           int sum=c;
           if(i>=0)
           {
            sum+=a[i]-'0';
            i--;
           }
           if(j>=0)
           {
            sum+=b[j]-'0';
            j--;
           }
           st+=sum%2+'0';
           c=sum/2;
       } 
       reverse(st.begin(),st.end());
       return st;
        
    }
};