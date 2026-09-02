class Solution {
public:
    int minBishopMoves(vector<int>& s, vector<int>& t) {
        int x1=s[0];
        int x2=s[1];
        int y1=t[0];
        int y2=t[1];
        int a=abs(x1-y1);
        int b=abs(x2-y2);
       if( (x1+x2)%2 != (y1+y2)%2 )
       {
        return -1;
       }
       else if(a==b)
       {
        return 1;
       }
       else 
       {
          return 2;
       }
    }
};