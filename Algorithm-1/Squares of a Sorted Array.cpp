class Solution {
  public:
    vector<int> sortedSquares(vector<int>& nums) {
        int len = nums.size();
        vector<int> temp_arr(len, 0);
        
        int a = 0;
        int b = len - 1;
        
        int counter = len - 1;
        
        while(a != b) {
            
            int square_a = nums[a] * nums[a];
            int square_b = nums[b] * nums[b];
            
            if (square_a < square_b) {
                temp_arr[counter] = square_b;
                b--;
            } else {
                temp_arr[counter] = square_a;
                a++;
            }
            
            counter--;
        }
        
        temp_arr[0] = nums[a] * nums[a];
        return temp_arr;
    }
};