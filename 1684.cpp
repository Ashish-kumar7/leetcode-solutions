class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        map<char,int>mp;
        for(int i=0;i<allowed.length();i++){
            mp[allowed[i]]++;
        }
        int ans=0;
        for(int i=0;i<words.size();i++){
            string str=words[i];
            int count=0;
            for(int j=0;j<str.length();j++){
                if(mp.find(str[j])!=mp.end()){
                    count++;
                }
            }
            if(count==str.length()){
                ans++;
            }
        }
        return ans;
    }
};