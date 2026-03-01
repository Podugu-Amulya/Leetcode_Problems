class Solution {
public:
    int minPartitions(string n) {
        int m=0;
        for(int i=0;i<n.size();i++)
        {
            int k=n[i]-'0';
            m=max(m,k);
        }
        return m;
        
    }
};