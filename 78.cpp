void solve(vector<int>&nums,vector<int>&temp,vector<vector<int>>&A,int ind){
    if(ind > nums.size()){
        return ;
    }
    A.push_back(temp);
    
    for(int i=ind;i<nums.size();i++){
        temp.push_back(nums[i]);
        solve(nums,temp,A,i+1);
        temp.pop_back();
    }
    
    return ;  
}
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>A;
        vector<int>temp;        
        solve(nums,temp,A,0);
        return A;
    }
};