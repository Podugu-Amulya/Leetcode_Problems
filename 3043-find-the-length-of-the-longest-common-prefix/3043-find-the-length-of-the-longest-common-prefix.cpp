class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        // int m=0;
        // for(int i=0;i<arr1.size();i++)
        // {    
        //     string s= to_string(arr1[i]);
        //     for(int j=0;j<arr2.size();j++)
        //     {
        //     string t=to_string(arr2[j]);
        //     int l=0;
        //         for(int k=0;k<min(s.size(),t.size());k++)
        //         {
        //             if(s[k]==t[k])
        //             {
        //                 l++;
        //             }
        //             else
        //             {
        //                 break;
        //             }
        //         }
        //         m=max(m,l);
        //     }
        // }
        // return m;
        
        set<string> s;
        int m=0;
        for(int i=0;i<arr2.size();i++)
        {  
            string st=to_string(arr2[i]);
            string p="";
            for(char ch:st)
            {   
                p=p+ch;
                s.insert(p);
            }
        }
        for(int i=0;i<arr1.size();i++)
        {
            string k=to_string(arr1[i]);
            string pre="";
            for(char ch:k)
            {
                pre=pre+ch;
                int n=pre.size();
                if(s.find(pre)!= s.end())
                {
                    m=max(m,n);
                }
            }
        }
        return m;

    }
};