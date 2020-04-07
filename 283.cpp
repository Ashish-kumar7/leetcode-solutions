class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>A;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                A.push_back(nums[i]);
            }
        }
        int x=nums.size()-A.size();
        for(int j=0;j<x;j++){
            A.push_back(0);
        }
        for(int k=0;k<A.size();k++){
            nums[k]=A[k];
        }
    }
};