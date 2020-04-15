class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
            }    
        }
        if(count==0){
              long long int pro=1;
            for(int i=0;i<nums.size();i++){
                pro=pro*nums[i];                
            }
            vector<int>B;
            for(int j=0;j<nums.size();j++){
                B.push_back(pro/nums[j]);
            }
            return B;
        }
        else if(count==1){
             long long int pro=1;
            vector<int>B;
            for(int i=0;i<nums.size();i++){
                if(nums[i]!=0){
                    pro=pro*nums[i];
                }
            }
            for(int i=0;i<nums.size();i++){
                if(nums[i]!=0){
                    B.push_back(0);
                }
                else if(nums[i]==0){
                    B.push_back(pro);
                }
            }
            return B;
        }
        else if(count>=2){
            vector<int>B;
            for(int j=0;j<nums.size();j++){
                B.push_back(0);
            }
            return B; 
        }
        return nums;
    }
};