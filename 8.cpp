class Solution {
public:
    int myAtoi(string str) {
        int len=str.length();
        int i=0;
        int flag=-1;
        long long int res=0;
        while(i<len && str[i]==' '){
            i++;
        }
        if(i<len && str[i]=='-'){
            flag=1;
            i++;
        }
        else if(i<len && str[i]=='+'){
            i++;
        }
        while(str[i]>='0' && str[i]<='9'){
            res=(res*10) + str[i]-'0';
            i++;
            if(res>INT_MAX){
                break;
            }
        }
        if(res>INT_MAX){
            if(flag==1){
                return INT_MIN;
            }
            else {
                return INT_MAX;
            }
        }
        if(flag==1){
            return (-1)*(res);
        }
        else{
            return res;
        }
    }
};