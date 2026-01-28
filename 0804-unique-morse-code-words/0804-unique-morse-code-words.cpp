class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& w) {
        vector<string> c={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> st;
        for(int i=0;i<w.size();i++)
        {
            string s="";
            for(int j=0;j<w[i].size();j++)
            {
                s=s+c[w[i][j]-'a'];
            }
            st.insert(s);
        }
        return st.size();
        
    }
};