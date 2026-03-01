class Solution {
public:
    string trimTrailingVowels(string s) {
        vector<char> v={'a','e','i','o','u'};
        int ind;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(find(v.begin(),v.end(),s[i]) == v.end())
            {
                ind=i;
                break;
            }
        }
        return s.substr(0,ind+1);
        
    }
};