class Solution {
public:
    bool judgeCircle(string moves) {
        int left=0;
        int right=0;
        int up=0;
        int down=0;
        for(int i=0;i<moves.length();i++){
            if(moves[i]=='U'){
                up++;
            }
            else if(moves[i]=='R'){
                right++;
            }
            else if(moves[i]=='L'){
                left++;
            }
            else if(moves[i]=='D'){
                down++;
            }
        }
        if(up==down && left==right){
            return 1;
        }
        return 0;
    }
};