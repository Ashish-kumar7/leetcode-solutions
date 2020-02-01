class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int h=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<(h-1);i++)
        {
            int k=nums[i]^nums[i+1];
            if(k==0)
            {
                return 1;
            }
        }
        return 0;
    }
};