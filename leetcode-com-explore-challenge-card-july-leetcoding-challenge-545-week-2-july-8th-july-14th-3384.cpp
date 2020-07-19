class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>A;
        for(int i=0;i<nums.size();i++){
            int target=-nums[i];
            int  front=i+1;
            int back=nums.size()-1;
            while(front<back){
                int sum=nums[front]+nums[back];
                if(sum<target){
                    front++;
                }
               else if(sum>target){
                    back--;
                }
                else {
                    vector<int>B(3,0);
                    B[0]=nums[i];
                    B[1]=nums[front];
                    B[2]=nums[back];
                    A.push_back(B);
                    while(front<back && nums[front]==B[1] ){
                        front++;
                    }
                    while(front<back && nums[back]==B[2] ){
                        back--;
                    }
                }
            }
            while(i+1 <nums.size()-1 && nums[i]==nums[i+1]){
                i++;
            }
        }
        return A;
    }
};