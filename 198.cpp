class Solution {
public:
    int rob(vector<int>& nums) {
        
        int n=nums.size();
        if(n==0)
        {
            return 0;
        }
       else if(n==1){
            return nums[0];
        }
        else if(n==2){
            return max(nums[1],nums[0]);
        }
        else if(n==3){
            return max( (nums[0]+nums[2]) , nums[1]);
        }
        else 
        {
        int A[n+1];
        A[0]=0;
        A[1]=nums[0];
        A[2]=max(nums[1],nums[0]);
        A[3]=max( (nums[0]+nums[2]) , nums[1]);
        A[4]=max(  max ( (nums[3]+nums[0]),(nums[1]+nums[3])  ), (nums[0]+nums[2]) );
         for(int i=5;i<=n;i++){
            A[i]=  max (   A[i-1] ,   max ( (A[i-3] + nums[i-1] ) , ( A[i-2] + nums[i-1] ) ) );     
            }
        return A[n];
        }
    }
};