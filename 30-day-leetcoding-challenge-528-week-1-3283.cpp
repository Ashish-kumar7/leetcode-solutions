class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            int x=nums[i];
            mp[x]++;
        }
        map<int ,int> :: iterator it ;
    int p;
    for(it=mp.begin();it!=mp.end();it++)
    {
        if(it->second==1)
        {
            p=it->first;
            break;
        }
    }
        return p;
    }

};