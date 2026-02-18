class Solution {
public:
    bool hasAlternatingBits(int n) {
        //string st=bitset<32>(n).to_string();
        string st="";
        while(n!=0)
        {
            int rem=n%2;
            st=st+to_string(rem);
            n=n/2;
        }
        for(int i=0;i<st.size()-1;i++)
        {
             if(st[i] ==st[i+1])
             {
                return false;
             }
        }
        return true;
        
    }
};