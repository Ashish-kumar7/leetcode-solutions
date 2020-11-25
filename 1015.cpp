class Solution {
public:
    int smallestRepunitDivByK(int K) {
        
        if(K%2==0){
            return -1;
        }
        if(K%5==0){
            return -1;
        }
        if(K==1){
            return 1;
        }
        
        int n=1;
        int remainder=1;
        
        int count=1;
               
        while(remainder!=0){
           
            remainder=remainder*10  + 1 ; 
            remainder=remainder%K;
            count++;
            
            if(remainder==0){
                return count;
            }
            
        }
        
        return -1;
        
        
        
    }
};