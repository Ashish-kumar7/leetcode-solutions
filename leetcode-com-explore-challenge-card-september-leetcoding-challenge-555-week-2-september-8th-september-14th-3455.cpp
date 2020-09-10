class Solution {
public:
    string getHint(string secret, string guess) {
        int bull=0;
        int cow=0;
        
        map<int,int>mp;
        for(int i=0;i<secret.length();i++){
            if(guess[i]==secret[i]){
                bull++;
                guess[i]='A';
                secret[i]='B';
            }
            else{
                mp[secret[i]]++;
            }
        }
        
        for(int i=0;i<guess.length();i++){
            if(mp.find(guess[i])!=mp.end() && mp[guess[i]]>0 ){
                mp[guess[i]]--;
                cow++;
            }
        }
         string str=to_string(bull) + 'A' + to_string(cow) + 'B';
        
        return str;
        
        
    }
};\