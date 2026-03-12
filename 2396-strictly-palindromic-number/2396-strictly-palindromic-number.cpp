class Solution {
public:
bool bin(int n,int b)
{   
    string st="";
    while(n!=0)
    {
        int res=n%b;
        st=st+to_string(res);
        n=n/b;
    }
    reverse(st.begin(),st.end());
    int l=0;
    int r=st.size();
    while(l<r)
    {
        if(st[l] != st[r])
        {
            return false;
        }
        l++;
        r--;
    }
    return true;

}
    bool isStrictlyPalindromic(int n) {
        int c=0;
        for(int i=2;i<=n-2;i++)
        {
            if(bin(n,i))
            {
                c++;
            }
        }
        return c==n-3;
    }
};