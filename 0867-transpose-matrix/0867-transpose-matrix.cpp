class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& m) {
        int r=m.size();
        int c=m[0].size();
        vector<vector<int>> mat(c,vector<int>(r));
        for(int i=0;i<c;i++)
        {
            for(int j=0;j<r;j++)
            {
                mat[i][j]=m[j][i];
            }
        }
        return mat;
    }
};