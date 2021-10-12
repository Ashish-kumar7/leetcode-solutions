class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) 
    {
        priority_queue<int,vector<int> , greater<int>> pq;
        for(int i = 0; i < arr.size(); i++)
        {
            pq.push(arr[i]);
        }
        int i = 1;
        vector<int> ans;
        if(arr.size() == 0)
            return ans;
        int val = pq.top();
        pq.pop();
        unordered_map<int,int> mp;
        mp[val] = i;
        while(!pq.empty())
        {
            if(val == pq.top())
            {
                mp[val] = i;
            }
            else if(val < pq.top())
            {
                val = pq.top();
                mp[val] = ++i;
            }
            pq.pop();
        }
       for(int i = 0; i < arr.size(); i++)
       {
           ans.push_back(mp[arr[i]]);
       }
        return ans;
    }
};