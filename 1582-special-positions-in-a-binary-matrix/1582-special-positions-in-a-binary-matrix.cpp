class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        vector<int> r;
        vector<int> col;
        for(int i=0;i<mat.size();i++)
        {   
            int c=0;
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]==1)
                {
                    c++;
                }
            }
            r.push_back(c);
        }
        for(int i=0;i<mat[0].size();i++)
        {   
            int c1=0;
            for(int j=0;j<mat.size();j++)
            {
                if( mat[j][i]==1)
                {
                    c1++;
                }
            }
            col.push_back(c1);
        }
        int cn=0;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]==1 && r[i]==1 && col[j]==1)
                {
                    cn++;
                }
            }
        }
        return cn;
    }
};