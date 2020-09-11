class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        int n=nums.size();
        vector<pair<int,int>>mp;
        for(int i=0;i<n;i++){
            mp.push_back(make_pair(nums[i],i));
        }
        int start=0;
        int end=1;
        sort(mp.begin(),mp.end());
        while(end<n){
    long long int d1=mp[start].first;
	long long int d2=mp[end].first;
            if(  abs(mp[start].second - mp[end].second) <=k   && abs(d1-d2) <=t ){
                return 1;
            }
            if(abs(mp[start].second - mp[end].second) >k){
                end++;
            }
            if(abs(d1-d2) >t){
                start++;
            }
            if(start==end){
                end++;
            }
        }
        return  0;      
    }
};