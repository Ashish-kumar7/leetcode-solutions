class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        int A[100];
        for(int i=0;i<100;i++){
            A[i]=0;
        }
        
        for(int i=lowLimit;i<=highLimit;i++){
            int sum=0;
            int x=i;
            while(x>0){
                sum+=(x%10);
                x=x/10;
            }
            A[sum]++;
        }
        int maxi=INT_MIN;
        for(int i=0;i<100;i++){
            maxi=max(maxi,A[i]);
        }
        
        return maxi;
    
    }
};