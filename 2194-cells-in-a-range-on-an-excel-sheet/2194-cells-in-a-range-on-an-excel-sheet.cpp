class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> res;
        int a=s[1]-'0';
        int b=s[4]-'0';
        
      
        for(int j=(int)s[0];j<=(int)s[3];j++)
        {   
            
        for(int i=a;i<=b;i++)
           {
                res.push_back(char(j)+to_string(i));
           }
        }
        return res;
        
    }
};