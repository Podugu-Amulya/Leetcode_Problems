class Solution {
public:
    string mapWordWeights(vector<string>& wo, vector<int>& w) {
        string st="";
        for(int i=0;i<wo.size();i++)
        {    
            int s=0;
            for(int j=0;j<wo[i].size();j++)
            {   
                s=s+w[wo[i][j]-'a'];
            }
            int k=s%26;
            st=st+char('z'-k);
        }
        return st;
        
    }
};