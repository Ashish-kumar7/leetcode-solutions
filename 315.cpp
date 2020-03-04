class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        
         vector<int>A;
        for(int i=0;i<nums.size();i++)
        {
            int min=nums[i];
            int count=0;
            for(int j=i;j<nums.size();j++)
            {
                if(min>nums[j])
                {
                    count++;
                }
            }
            A.push_back(count);            
        }
        return A;
        
    }
};

