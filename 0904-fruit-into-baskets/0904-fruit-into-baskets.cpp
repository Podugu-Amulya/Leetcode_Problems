class Solution {
public:
    int totalFruit(vector<int>& arr) {
        int l=0;
        int r=0;
        int m=0;
        map<int,int> mp;
        while(r < arr.size())
        {
            mp[arr[r]]++;
            if(mp.size()<=2)
            {
                m=max(m,(r-l+1));
           }
            while(mp.size()>2)
            {
                mp[arr[l]]--;
                if(mp[arr[l]]==0)
                {
                    mp.erase(arr[l]);
                }
                l++;
            }
            r++;
        }
        return m;
    }
};