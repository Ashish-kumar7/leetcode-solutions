class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        
        vector<string>A;
        map<string,int>mp;
        
        int n=s.length();
        if(n<10)
        {
            return A;
        }
        
        for(int i=0;i<n;i++)
        {
            string temp=s.substr(i,10);
            if(mp.find(temp)!=mp.end())
            {
                mp[temp]++;
            }
            else
            {
                mp[temp]=1;
            }
        }
        
        map<string,int>::iterator it;
        for(it=mp.begin();it!=mp.end();it++)
        {
            if((it->second)>1)
            {
                A.push_back(it->first);
            }
        }
        
        return A;
    }
};