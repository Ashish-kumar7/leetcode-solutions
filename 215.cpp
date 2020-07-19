class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        priority_queue<int,vector<int>,greater<int>>q;
        for(int i=0;i<n;i++){
            q.push(nums[i]);
            if(q.size()>k){
                q.pop();
            }
        }
        return q.top();
    }
};