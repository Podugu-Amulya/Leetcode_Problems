class Solution {
public:
    int vowelConsonantScore(string s) {
        int cn=0;
        int v=0;
        int a=0;
        string vo="aeiou";
        for(char ch:s)
        {  
          if(isalpha(ch)) a++;
          if(vo.find(ch) !=string::npos)
          {
            v++;
          }
        }
        cn=a-v;
        if(cn > 0)
        {
            return ceil(v/cn);
        }
        else
        {
            return 0;
        }
    }
};