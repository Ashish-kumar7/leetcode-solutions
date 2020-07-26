class Solution {
public:
    void solve(vector<int>&nums ,vector<vector<int>>&V, vector<int>temp,int ind ){
        V.push_back(temp);  
        for(int i=ind;i<nums.size();i++){
            temp.push_back(nums[i]);
            solve(nums,V,temp,i+1);
            temp.pop_back(); 
        }
        return ;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>V;
        vector<int>temp;
        int ind=0;
        solve(nums,V,temp,ind);
        return V;
    }
};