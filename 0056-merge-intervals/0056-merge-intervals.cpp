class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inte) {
        sort(inte.begin(),inte.end());
        vector<vector<int>> res;
        res.push_back(inte[0]);
        
        for(int i=1;i<inte.size();i++)
        {
            if(inte[i][0] <=res.back()[1])
            {
                res.back()[1]=max(res.back()[1],inte[i][1]);
                res.back()[0]=min(res.back()[0],inte[i][0]);
            }
            else
            {
                res.push_back(inte[i]);
            }
        }
       return res;
    }
};