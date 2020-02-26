class Solution {
public:
    vector<int> twoSum(vector<int>& A, int k) {
        vector<int>B;
        int n=A.size();
        int i=0;
        int j=n-1;
        int a=A[i];
        int b=A[j];
        
        while(a<=b){
            if((a+b)==k){
                B.push_back(i+1);
                B.push_back(j+1);
                return B;
            }
            else if((a+b)>k){
                j--;
                b=A[j];                
            }
            else if((a+b)<k){
                i++;
                a=A[i];
            }
        }
        return B;      
    }
};
