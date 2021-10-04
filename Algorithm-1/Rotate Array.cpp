class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        vector<int>vec;
        int n=nums.size();
        for(int i=n-k;i<n;i++){
            vec.push_back(nums[i]);
        }
        for(int i=0;i<n-k;i++){
            vec.push_back(nums[i]);
        }
        for(int i=0;i<vec.size();i++){
            nums[i]=vec[i];
        }
        return ;
    }
};