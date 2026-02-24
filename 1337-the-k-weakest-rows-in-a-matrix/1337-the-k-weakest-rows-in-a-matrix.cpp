class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        map<int,int> mp;
        for(int i=0;i<mat.size();i++)
        {  
            int c=0;
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]==1)
                {
                    c=c+1;
                }
            }
            mp[i]=c;
        }
        vector<pair<int,int>> res(mp.begin(),mp.end());
        sort(res.begin(),res.end(),[](auto &a,auto  &b){
            if(a.second==b.second)
            {
                return a.first < b.first;
            }
            return a.second < b.second;
        });
        vector<int> r;
        for(int i=0;i<k;i++)
        {
            r.push_back(res[i].first);
        }
        return r;
        
    }
};