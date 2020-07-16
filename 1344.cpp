class Solution {
public:
    double angleClock(int hour, int minutes) {
        double res=abs( 30*hour  + (0.5*minutes) - (6*minutes) );
        if(res>180){
            return 360-res;
        }
        return res;
    }
};