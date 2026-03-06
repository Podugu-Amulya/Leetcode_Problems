class Solution {
public:
    bool checkOnesSegment(string s) {
       
       vector<int> a;
       for(int i=0;i<s.size();i++)
       {
        if(s[i]=='1')
        {
            a.push_back(i);
        }
       }
       if(a.size()==1)
       {
        return true;
       }
        for(int i=0;i<a.size()-1;i++)
        {
            if((a[i+1]-a[i])!=1)
            {
                return false;
            }
        }
        return true;
    }
};