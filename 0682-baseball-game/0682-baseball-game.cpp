class Solution {
public:
    int calPoints(vector<string>& nums) {
        vector<int> res;
        for(int i=0;i<nums.size();i++)
        {  
            if(nums[i]!="C" && nums[i]!="D" && nums[i]!="+")
            {
                int num=stoi(nums[i]);
                res.push_back( num);
            }
            else if(nums[i]=="C")
            {
                res.pop_back();
            }
            else if(nums[i]=="D")
            {
                res.push_back(res[res.size()-1]*2);
            }
            else
            {
                res.push_back(res[res.size()-1]+res[res.size()-2]);
            }

            
        }
        int k=accumulate(res.begin(),res.end(),0);
        return k;
    }
};