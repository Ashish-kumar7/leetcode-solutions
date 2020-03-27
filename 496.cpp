class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>V;
        if(nums1.empty() && nums2.empty()){
            return V;
        }
        stack<int>S;
        S.push(nums2[0]);
        map<int,int>mp;
        for(int i=0;i<nums2.size();i++){            
            if(nums2[i]>S.top()){
            while(!S.empty() && nums2[i]>S.top()){
                mp[S.top()]=nums2[i];
                S.pop();   
            }
                S.push(nums2[i]);
            }
            else{
                S.push(nums2[i]);
                
            }
        }
        map<int,int>:: iterator it;
        for(int j=0;j<nums1.size();j++){
            if(mp.find(nums1[j])==mp.end()){
                V.push_back(-1);
            }
            else {
                V.push_back(mp.find(nums1[j])->second);
            } 
        }
        return V;
    }
};