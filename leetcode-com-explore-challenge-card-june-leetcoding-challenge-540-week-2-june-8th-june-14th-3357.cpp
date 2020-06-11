class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int count0=0;
        int count1=0;
        int count2=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count0++;
            }
            else if(nums[i]==1){
                count1++;
            }
            else if(nums[i]==2){
                count2++;
            }   
        }
        int i,j;
        
        for( i=0;i<count0;i++){
            nums[i]=0;
        }
        for( j= i;j<count0+count1;j++){
            nums[j]=1;
        }
        for(int k=j;k<count0+count1+count2;k++){
            nums[k]=2;
        }   
    }
};