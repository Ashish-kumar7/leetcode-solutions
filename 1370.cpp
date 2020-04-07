class Solution {
public:
    string sortString(string s){
        string res;
        int n=s.length();
        int count=0;
        int ans[26];
        for(int j=0;j<26;j++){
            ans[j]=0;
        }
        for(int i=0;i<n;i++){
            ans[ s[i]-'a' ]++;
        }
        while(count<n){ 
            for(int i=0;i<26;i++){
                if(ans[i]!=0){
                    res+=char(i+97);
                    ans[i]--;
                    count++;
                }  
            }
            for(int i=25;i>=0;i--){
                if(ans[i]!=0){
                    res+=char(i+97);
                    ans[i]--;
                    count++;
                } 
            }
        }
        return res;   
    }
};