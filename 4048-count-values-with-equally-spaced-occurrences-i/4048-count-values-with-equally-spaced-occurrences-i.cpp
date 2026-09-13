class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int c=0;
        for(auto& [k,v]:mp)
        {
            if(v==3)
            {   
                vector<int> pos;
                for(int i=0;i<nums.size();i++)
                {  
                    if(nums[i]==k)
                    {
                   pos.push_back(i);
                    }
                }
               if((pos[1]-pos[0])==(pos[2]-pos[1]))
               {
                c++;
               }
            }
        }
        return c;
    }
};