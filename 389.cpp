class Solution {
public:
    char findTheDifference(string s, string t) {
        
        map<char,int>mp;
        int n=s.length();
        int m=t.length();
        int length=n+m;
        
        int val;
        char key;
        for(int i=0;i<n;i++)
        {
            key=s[i];
            mp[key]++;
        }
        
        for(int i=0;i<m;i++)
        {
            key=t[i];
            mp[key]++;
        }
    
        
        map<char,int> :: iterator it;
        
        for(it=mp.begin();it!=mp.end();it++)
        {
            if( (it->second) % 2 !=0)
            {
                return it->first;
            }
            
        }
        return '0';
    }
};