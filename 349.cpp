class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp;
        int m=nums1.size();
        int n=nums2.size();
        for(int i=0;i<m;i++){
            mp[nums1[i]]++;
        }
        vector<int>A;
        map<int,int> :: iterator it;
        map<int,int>mp2;
        for(int j=0;j<n;j++){   
            if(mp2.find(nums2[j])==mp2.end() && mp.find(nums2[j])!=mp.end()){
                A.push_back(nums2[j]);
            }
                mp2[nums2[j]]++;
        }
        return A;
    }
};