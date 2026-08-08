class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& mat) {

       
        for(int i=0;i<9;i++)
        {    
            set<char> st;

            for(int j=0;j<9;j++)
            {
                if(isdigit(mat[i][j]))
                {  
                    if(st.count(mat[i][j])==1)
                    {
                        return false;
                    }
                    else
                    {
                        st.insert(mat[i][j]);
                    }
                }
            }
        }

        
        for(int i=0;i<9;i++)
        {    
            set<char> st;

            for(int j=0;j<9;j++)
            {
                if(isdigit(mat[j][i]))
                {  
                    if(st.count(mat[j][i])==1)
                    {
                        return false;
                    }
                    else
                    {
                        st.insert(mat[j][i]);
                    }
                }
            }
        }

       
        for(int row=0;row<9;row+=3)
        {
            for(int col=0;col<9;col+=3)
            {
                set<char> st;

                for(int i=row;i<row+3;i++)
                {
                    for(int j=col;j<col+3;j++)
                    {
                        if(isdigit(mat[i][j]))
                        {
                            if(st.count(mat[i][j])==1)
                            {
                                return false;
                            }
                            else
                            {
                                st.insert(mat[i][j]);
                            }
                        }
                    }
                }
            }
        }

        return true;
    }
};