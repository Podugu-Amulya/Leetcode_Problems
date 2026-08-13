class Solution {
public:
    double minPrice(vector<int>& p, vector<int>& d) {
        sort(p.rbegin(),p.rend());
        sort(d.rbegin(),d.rend());
      
        int m=min(p.size(),d.size()); 
        double s=0;
        for(int i=0;i<m;i++)
        {    
             
             double k=(p[i]*(100.0-d[i]))/100.0;
             s=s+k;
        }
        for(int i=m;i<p.size();i++)
        {
           
                s=s+p[i];
            
           
        }
        return s;
        
    }
};