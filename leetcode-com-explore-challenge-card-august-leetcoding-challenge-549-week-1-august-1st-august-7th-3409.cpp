class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.length();
        if((word[0]-NULL>=65 && word[0]-NULL<=90) && (word[1]-NULL>=65 && word[1]-NULL<=90 )){
            for(int i=2;i<n;i++){
                if(word[i]-'z'<=26 && word[i]-'a'>=0){
                    cout<<"yryr"<<endl;
                    return 0;
                }
            }
        }
        else if(word[0]-NULL<=122 && word[0]-NULL>=97 ){
            for(int i=1;i<n;i++){
                if(word[i]-NULL<=90 && word[i]-NULL>=65){
                    cout<<"yryr"<<endl;
                    return 0;
                }
            }
            return 1;
        }
        else if((word[0]-NULL<=122 && word[0]-NULL>=97) && ( word[1]-NULL<=122 && word[1]-NULL>=97) ){
            for(int i=2;i<n;i++){
                if(word[i]-NULL<=90 && word[i]-NULL>=65){
                    cout<<"yryr"<<endl;
                    return 0;
                }
            }
        }
        else if((word[0]-NULL>=65 && word[0]-NULL<=90) && (word[1]-NULL<=122 && word[1]-NULL>=97 )){
            for(int i=2;i<n;i++){
                if(word[i]-NULL<=90 && word[i]-NULL>=65){
                    cout<<"yryr"<<endl;
                    return 0;
                }
            }
        }
        return 1;
    }
    
};
