class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
       long long int result=0;
        int n=nums.size();
        int bits[32]= {0};
        
        for(int i=0;i<32;i++){
            for(int n:nums){
                
                bits[i]+= (n>>i) & 1;
                bits[i]=bits[i]%3;
                
                
            }
        }
        
        for(int i=0;i<32;i++){
            result=result+pow(2,i)*bits[i];
           // cout<<result<<endl;
        }
        
        return result;
    }
};