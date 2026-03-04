class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& b, int n) {
       vector<int> res(n);
       for(int j=0;j<b.size();j++)
        {
           for(int i=b[j][0] ;i<=b[j][1];i++)
            {      
                
                    int s=b[j][2];
               
                    res[i-1]+=s;
                   
                
                
            }
        }
        return res;
        
    }
};