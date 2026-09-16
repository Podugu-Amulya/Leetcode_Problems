class Solution {
public:
    string minWindow(string s, string t) {
        map<char,int> need;
        map<char,int> wd;
        for(char ch:t)
        {
            need[ch]++;
        }

        int l=0;
        int c=0;
        int start=0;
        int minlen=INT_MAX;
        for(int r=0;r<s.size();r++)
        {
            char ch=s[r];
            if(need.find(ch) !=need.end())
            {
                wd[ch]++;
                if(wd[ch]<=need[ch])
                {
                    c++;
                }
            }
            while(c==t.size())
            {
                if(r-l+1 < minlen)
                {
                    minlen=r-l+1;
                    start=l;
                }
                char remove=s[l];
                if(need.find(remove) !=need.end())
                {
                    wd[remove]--;
                    if(wd[remove] < need[remove])
                    {
                        c--;
                    }

                }
                l++;

            }
        }

       if(minlen==INT_MAX)
       {
        return "";
       }
       return s.substr(start,minlen);
        
    }
};