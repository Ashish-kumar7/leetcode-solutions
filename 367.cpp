class Solution {
public:
    bool isPerfectSquare(int num) {
       
        float p=sqrt(num);
        int a=sqrt(num);
        if(p==(int)a)
        {
            return 1;
        }
        return 0;   
    }
};