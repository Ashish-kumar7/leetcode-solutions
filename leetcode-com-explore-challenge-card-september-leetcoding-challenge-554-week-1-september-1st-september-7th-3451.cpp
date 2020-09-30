class Solution {
public:
    bool wordPattern(string pattern, string str) {
        string word; 
        stringstream iss(str); 
        map<char,string>mp;
        map<string,int>mp1;
        map<char,int>mp2;
        int i=0;
        string word2; 
        stringstream iss2(str); 
        while(iss2>>word2){
            mp1[word2]++;
        }
        int j=0;
        while(j<pattern.length()){
            mp2[pattern[j]]++;
            j++;
        }
        if(mp1.size()!=mp2.size()){
            cout<<"no"<<endl;
            return 0;
        }
        int count=0;
         while (iss >> word){
        if(mp.find(pattern[i])==mp.end()){
            cout<<word<<endl;
            mp[pattern[i]]=word;
            i++;
        }
        else{
            if(mp[pattern[i]]!=word){
                cout<<word<<"rrrr"<<endl;
                return 0;
            }
            i++;
        }
        count++;
    }
        if(count!=pattern.length()){
            return 0;
        }
        return true;
    }
};
