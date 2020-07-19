class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>Q;
        for(auto it=mp.begin();it!=mp.end();it++){
            Q.push({it->second,it->first});
            if(Q.size()>k){
                Q.pop();
            }    
        }
        vector<int>B;
        while(!Q.empty()){
            B.push_back(Q.top().second);
            Q.pop();
        }
        return B;
    }
};