class Solution {
public:
    int reverse(int x) {
        
               
        long long int value=0;
        long long val=x;
        while(val!=0)
        {
            value=(value*10) + (val % 10);
            val=val/10;            
        }
        
        if(value>=INT_MAX || value<=INT_MIN)
        {
            return 0;
        }
        
        return value;
    
    }
};