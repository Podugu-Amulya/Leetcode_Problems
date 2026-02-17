class Solution {
public:
    int prefixConnected(vector<string>& w, int k) {
       
        map<string,int> mp;
        for(int i=0;i<w.size();i++)
        {   
            string st=w[i];
            if(st.size()>=k)
            {
            string pre=st.substr(0,k);
            mp[pre]++;
            }
        }
        int c=0;
        for(auto& [k,v]:mp)
        {
            if(v >=2)
            {
                c++;
            }
        }
        return c;
       

        
    }
};