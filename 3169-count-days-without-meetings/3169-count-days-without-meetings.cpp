class Solution {
public:
    int countDays(int days, vector<vector<int>>& m) {
       sort(m.begin(),m.end());
       int st=m[0][0];
       int end=m[0][1];
       int num=0;
       for(int i=1;i<m.size();i++)
       {
        if(m[i][0] <=end)
        {
            end=max(end,m[i][1]);
          

        }
        else
        {
            num=num+(end-st+1);
            st=m[i][0];
            end=m[i][1];
        }
       }
       num+=(end-st+1);
       return days-num;
       




       
    }
};



