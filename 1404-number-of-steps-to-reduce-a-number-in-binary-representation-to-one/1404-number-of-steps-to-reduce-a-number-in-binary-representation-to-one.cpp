class Solution {
public:
    int numSteps(string s) {
        int c=0;
      while(s !="1")
      {
          if(s.back()=='0')
          {
            s.pop_back();
          }
          else
          { 
            int n=s.size()-1;
            for(int i=n;i>=0;i--)
            {
                if(s[i]=='0')
                {
                    s[i]='1';
                    break;
                }
                else
                {
                    s[i]='0';
                }
                if(i==0)
                {
                    s='1'+s;
                    break;
                }
            }
          }
          c++;
      }
      return c;
    }
};