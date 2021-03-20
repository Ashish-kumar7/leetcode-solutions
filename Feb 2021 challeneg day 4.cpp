class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int count =0;
        for(int i=0;i<nums.size();i++){
            if( max(mp[nums[i]-1],mp[nums[i]+1]) >0 ){
                count=max(count,mp[nums[i]] + max(mp[nums[i]-1],mp[nums[i]+1]));   
            }
        }
        return count;
        
    }
};