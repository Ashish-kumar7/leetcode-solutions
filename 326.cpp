class Solution {
public:
    bool isPowerOfThree(int n) {
        
        if(n<=0)
        {
            return 0;
        }
        if(1162261467 % n ==0)
        {
            return 1;
        }
        
        return 0;
        
    }
};