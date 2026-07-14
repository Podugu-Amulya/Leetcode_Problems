class Solution {
public:
    bool prime(int i)
    {
        int c=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            return true;
        }
        return false;
    }
    int sumOfPrimesInRange(int n) {
        string st=to_string(n);
        reverse(st.begin(),st.end());
        int r=stoi(st);
        int l=min(n,r);
        int rh=max(n,r);
        int s=0;
        for(int i=l;i<=rh;i++)
        {
            if(prime(i))
            {
                s=s+i;
            }
        }
        return s;
    }
};