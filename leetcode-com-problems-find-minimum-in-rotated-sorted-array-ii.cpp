class Solution {
public:
    int findMin(vector<int>& nums) {
        int flag=0;
        int ans;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                flag=1;
                ans=nums[i+1];
                break;
            }
        }
        if(flag==1){
            return ans;
        }
        return nums[0];
    }
};