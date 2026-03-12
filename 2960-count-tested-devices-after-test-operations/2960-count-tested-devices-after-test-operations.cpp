class Solution {
public:
    int countTestedDevices(vector<int>& b) {
        int c=0;
        for(int i=0;i<b.size();i++)
        {    
            // if(i==b.size()-1 && b[i]>0)
            // {
            //     c++;

            //}
            if(b[i]>0)
            {
                c++;
                for(int j=i+1;j<b.size();j++)
                {   
                    if(b[j] !=0)
                    {
                    b[j]=b[j]-1;
                    }
                }
            }
        }
        return c;
        
    }
};