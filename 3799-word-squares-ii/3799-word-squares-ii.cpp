class Solution {
public:
    vector<vector<string>> wordSquares(vector<string>& w) {
        vector<vector<string>> res;
        int n=w.size();
        for(int i=0;i<n;i++)
        {
           for(int j=0;j<n;j++)
           {
           if(j==i) continue;
           for(int k=0;k<n;k++)
           {
           if(k==i || k==j) continue;
         
           for(int l=0;l<n;l++)
           {
              if(l==i || l==j || l==k) continue;
              if(w[i][0]==w[j][0] && w[i][3]==w[k][0] && 
                 w[l][0]==w[j][3] && w[l][3]==w[k][3])
                 {  vector<string> m;
                    m.push_back(w[i]);
                    m.push_back(w[j]);
                     m.push_back(w[k]);
                    m.push_back(w[l]);
                    res.push_back(m);
                 }
           }
           }
           }

        }
        
        sort(res.begin(),res.end());
        return res;
        
    }
};