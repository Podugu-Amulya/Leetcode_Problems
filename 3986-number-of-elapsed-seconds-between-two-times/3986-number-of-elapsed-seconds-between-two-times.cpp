class Solution {
public:
    int secondsBetweenTimes(string st, string et) {
        int h,m,s;
        char c;
        stringstream ss(st);
        ss >> h >> c >> m >> c >> s;
        int st1=h*3600+m*60+s;

         int h1,m1,s1;
         char c1;
        stringstream ss1(et);
        ss1 >> h1 >> c1 >> m1 >> c1 >> s1;
        int et1=h1*3600+m1*60+s1;

        return et1-st1;
    }
};