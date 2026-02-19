class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        // int l=0;
        // int h=nums.size()-1;
        // while(l <= h)
        // {
        //     int mid=l+(h-l)/2;
        //     if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1])
        //     {
        //         return mid;
        //     }
        //     else if(nums[mid] <  nums[mid-1])
        //     {
        //         h=mid-1;
        //     }
        //     else
        //     {
        //         l=mid+1;
        //     }
        // }
        // return 0;



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