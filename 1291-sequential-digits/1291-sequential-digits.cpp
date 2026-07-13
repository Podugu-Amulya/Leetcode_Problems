class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> res;
        string s="123456789";
        string l=to_string(low);
        string h=to_string(high);
        for(int i=l.size();i<=h.size();i++)
        {
            for(int j=0;j<=8-i+1;j++)
            {
                string st=s.substr(j,i);
                int n=stoi(st);
                if(n>=low && n<=high)
                {
                    res.push_back(n);
                }
            }
        }
        return res;
        
    }
};