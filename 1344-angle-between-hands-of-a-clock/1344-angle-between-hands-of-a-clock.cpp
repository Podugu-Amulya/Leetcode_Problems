class Solution {
public:
    double angleClock(int ho, int mn) {
    double h=ho*30+mn*0.5;
    double m=mn*6;
    double ang=abs(h-m);
    return min(ang,360-ang);

        
    }
};