class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int, vector<int>> mp;

        for(int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]].push_back(i);
        }

        int c = 0;

        for(auto& [k, pos] : mp)
        {
            if(pos.size() >= 3)
            {
                bool t=true;
                for(int i=1;i<pos.size()-1;i++)
                {
                   if(pos[i]-pos[i-1] != pos[i+1]-pos[i])
                   {
                       t=false;
                   }
                }
                if(t)
                {
                    c++;
                }
            }
        }

        return c;
    }
};