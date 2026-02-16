class Solution {
public:
    int reverseBits(int n) {
     string st= bitset<32>(n).to_string();
     reverse(st.begin(),st.end());
     int num=stoi(st,0,2);
     return num;
     
        
    }
};