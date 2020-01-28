class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a;
        int b;
        int n=nums.size();        
      vector<int>A(2,0);

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    A[0]=i;
                    A[1]=j;
                    break;
                }
            }
        }
        return A;
    }

};