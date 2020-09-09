class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int firstxor=0;
        for(int i=0;i<nums.size();i++){
            firstxor=firstxor^nums[i];
        }
        firstxor=firstxor&(-firstxor);
        int a=0;
        int b=0;
        for(int i=0;i<nums.size();i++){
            if((nums[i]&firstxor)==0){
                a=a^nums[i];
            }
            else {
                b=b^nums[i];
            }
        }
        vector<int>V;
        V.push_back(a);
        V.push_back(b);
        return V;
    }
};