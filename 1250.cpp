class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        
        int n=nums.size();
        
        int result=nums[0];

        for(int i=0;i<n;i++)
        {
            result=__gcd(nums[i],result);
            
            if(result==1)
            {
                return 1;
            }    
        }
        
        return 0;
        
        
    }
};