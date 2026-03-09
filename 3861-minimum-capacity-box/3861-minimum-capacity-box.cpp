class Solution {
public:
    int minimumIndex(vector<int>& c, int itm) {
        vector<pair<int,int>> res;
       for(int i=0;i<c.size();i++)
       {
          res.push_back({c[i],i});
       }
       sort(res.begin(),res.end(),[](pair<int,int> &a,pair<int,int> &b){
         if(a.first == b.first)
            return a.second < b.second;  
        return a.first < b.first;
       });
        for(int i=0;i<c.size();i++)
        {
            if(res[i].first >=itm)
            {
                return res[i].second;
                
            }
        }
       return -1;
        
    }
};