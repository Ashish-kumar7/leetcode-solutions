class Solution {
public:
    bool isPowerOfFour(int num) {
        
        
        float yy=(log10 (num)/log10 (4));
     
        if(yy == (int)yy)
        {
            return 1;
        }
        else 
        {
            return 0;
        }
    }
};