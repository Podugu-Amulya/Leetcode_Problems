class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int> res(code.size(),0);
        int n=code.size();
        if(k==0)
        {
           return res;
        }
        vector<int> a;
        for(int i=0;i<code.size();i++)
        {
            a.push_back(code[i]);
        }
          for(int i=0;i<code.size();i++)
        {
            a.push_back(code[i]);
        }
        if(k>0)
        {
            for(int i=0;i<code.size();i++)
            {   
                int s=0;
                for(int j=i+1;j<i+1+k ;j++)
                {   
                    s=s+a[j];

                }
                code[i]=s;
            }
        }
        if(k<0)
        {   
            int m=k*-1;
             for(int i=code.size()-1;i>=0;i--)
             {   
                int s=0;
                for(int j=(i+n)-1;j>=(i+n)-m;j--)
                {
                    s=s+a[j];
                }
                code[i]=s;
             }
        }
        return code;
    }
};