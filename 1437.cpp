class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        vector<int>ans;
            for(int i=0;i<nums.size();i++){
                if(nums[i]==1){
                    ans.push_back(i);
                }
            }
        
        if(ans.size()==0 || ans.size()==1){
            return 1;
        }
        
        for(int i=1;i<ans.size();i++){
            if(ans[i]-ans[i-1] <=k){
                return 0;
            }
        }
        
        return 1;
        
    }
};