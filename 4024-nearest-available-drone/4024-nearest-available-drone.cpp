class Solution {
public:
    int nearestDrone(vector<vector<int>>& d, vector<int>& t) {
        vector<int> res;
        int m=INT_MAX;
        int ans=-1;
        for(int i=0;i<d.size();i++)
        {
           int k=abs(d[i][0]-t[0])+abs(d[i][1]-t[1]);
          
           if(k<=d[i][2]) 
           {   
               
               if(k<m)
               {
                m=k;
                ans=i;
               }
              
           }
        }
        return ans;
    }
};