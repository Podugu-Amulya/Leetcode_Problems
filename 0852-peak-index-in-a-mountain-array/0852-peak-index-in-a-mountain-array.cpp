class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=*max_element(arr.begin(),arr.end());
        vector<pair<int,int>> res;
        for(int i=0;i<arr.size();i++)
        {
            res.push_back({arr[i],i});
        } 
        sort(res.begin(),res.end());
        int l=0;
        int h=arr.size()-1;
        while(l <=h)
        {
            int mid=l+(h-l)/2;
            if(res[mid].first==n)
            {
                return res[mid].second;
            }
            else if(n > res[mid].first)
            {
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }
        }
     
        return 0;
    }
};