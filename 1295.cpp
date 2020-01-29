class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
      int counter=0;
        for(int i=0;i<n;i++)
        {
            int  a=nums[i];
            int count=0;
            while(a!=0){
                a=a/10;
                count++;
            }
            if(count%2==0){
                counter++;
            }
            
        }
        return counter;
    }
};