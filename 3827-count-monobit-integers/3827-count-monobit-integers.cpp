class Solution {
public:
    int countMonobit(int n) {
        int c=0;
        for(int i=0;i<=n;i++){
            int temp=i;
            string st="";
            if(temp==0)
            {
                st="0";
            }
            while(temp!=0)
            {
                int rem=temp%2;
                st=st+to_string(rem);
                temp=temp/2;
            }
            sort(st.begin(),st.end());
            if(st[0] == st[st.size()-1])
            {
                c++;
            }
        }
        return c;
        
    }
};