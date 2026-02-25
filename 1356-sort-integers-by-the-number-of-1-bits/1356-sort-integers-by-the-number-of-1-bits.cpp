class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>> res;
        for(int i=0;i<arr.size();i++)
        {
            int n=bitset<32>(arr[i]).count();
            res.push_back({arr[i],n});
 
        }
        sort(res.begin(),res.end(),[](const auto &a,const auto &b) {
            if(a.second==b.second)
            {
               return a.first < b.first;
            }
            return a.second < b.second;
        });
        vector<int> a;
        for(int i=0;i<res.size();i++)
        {
           a.push_back(res[i].first);
        }
        return a;

    }
};