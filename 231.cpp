class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        if(n<=0)
        {
            return 0;
        }
        int y=n-1;
        int z= y & n;
        if(z==0)
        {
            return 1;
        }
        return 0;
        
        
    }
};