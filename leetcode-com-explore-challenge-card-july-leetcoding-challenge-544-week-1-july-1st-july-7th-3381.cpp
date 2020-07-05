class Solution {
public:
    int hammingDistance(int x, int y) {
        int count=0;
        while(x || y ){
            int check=x&1;
            int check2=y&1;
            x=x>>1;
            y=y>>1;
            if(check  ^ check2){
                count++;
            }  
        }
        return count;
    }
};