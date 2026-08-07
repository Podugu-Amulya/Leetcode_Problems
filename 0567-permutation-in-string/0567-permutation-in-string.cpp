class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       int n=s1.size();
       int m=s2.size();
       if(m<n)
       {
        return 0;
       }
       vector<int> f1(26,0);
       vector<int> f2(26,0);
       for(int i=0;i<n;i++)
       {
        f1[s1[i]-'a']++;
       }
       int l=0;
       for(int r=0;r<s2.size();r++)
       {
            f2[s2[r]-'a']++;
            if(r-l+1==n)
            {
                if(f1==f2)
                {
                    return true;
                }
                else
                {
                    f2[s2[l]-'a']--;
                      l++;
                }
            }
           
            
       }
       return false;

    }
};