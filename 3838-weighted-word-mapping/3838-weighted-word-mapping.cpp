class Solution {
public:
    string mapWordWeights(vector<string>& wr, vector<int>& wg) {
        string st="";
        for(int i=0;i<wr.size();i++)
        {   
            int s=0;
            for(int j=0;j<wr[i].size();j++)
            {
                s=s+wg[wr[i][j]-'a'];
            }
            int k=s%26;
            st=st+char('a'+(25-k));
        }
        return st;
        
    }
};