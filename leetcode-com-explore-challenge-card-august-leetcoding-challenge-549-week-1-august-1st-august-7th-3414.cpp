class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>A;
        
        for(int i=0;i<nums.size();i++){
            int j=nums[i];
            j=abs(j)-1;
            if(nums[j]<0){
                A.push_back(j+1);
            }
            else{
                nums[j]=nums[j]* (-1);
            }
        }
        return A;
    }
};