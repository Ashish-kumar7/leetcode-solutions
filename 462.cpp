class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int length=nums.size();
        int x;
        if(length%2!=0) {
            int x=length/2;
            int h=nums[x];
            int val=0;
            for(int i=0;i<nums.size();i++){
                val+=abs(h-nums[i]);
            }
            return val;
        }
        else if(length%2==0){
            int p=length/2;
            int pp=p-1;
             int h=nums[p];
            int ll=nums[pp];
            int val1=0;
            int val2=0;
            for(int i=0;i<nums.size();i++){
                val1+=abs(h-nums[i]);
            }
            for(int i=0;i<nums.size();i++){
                val2+=abs(ll-nums[i]);
            }
            x= min(val1,val2);   
        }
        return x;
    }
};