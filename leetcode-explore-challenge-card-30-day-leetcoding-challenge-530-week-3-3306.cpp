class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        vector<int>V=binaryMatrix.dimensions();
        int rows=V[0];
        int cols=V[1];
        if(rows==0 || cols==0){
            return -1;
        }
        int res=-1;
        int r=0;
        int c=cols-1;
        while(r<rows && c>=0){
            if(binaryMatrix.get(r,c)==1){
                res=c;
                c--;
            }
            else {
                r++;
            }
        }
        return res;
    }
};	