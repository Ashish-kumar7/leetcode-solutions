class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0)
            return 1;
        long long int p=n;
        if(n<0){
            p = -p;
            x = 1/x;
        }
        if(p%2==0){
            return myPow(x*x , p/2);
        }
        else {
            return x*myPow(x*x , p/2);
        }
    }
};