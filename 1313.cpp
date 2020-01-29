class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>A;
        for(int i=0;i<nums.size()-1;i=i+2)
        {
            int n=nums[i];
            for(int j=0;j<n;j++)
            {
                A.push_back(nums[i+1]);
            }
        }
        return A;
    }
};