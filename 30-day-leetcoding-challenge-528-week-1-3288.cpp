class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) { 
        vector<vector<string>>A;
        map<string,vector<string>>mp;
        for(int i=0;i<strs.size();i++){
            string s=strs[i];
            string x=strs[i];
            sort(x.begin(),x.end()); 
            mp[x].push_back(s);   
        }
        map<string,vector<string>> :: iterator it;
        for(it=mp.begin();it!=mp.end();it++){
            A.push_back(it->second);
        }
        return A;
    }
};