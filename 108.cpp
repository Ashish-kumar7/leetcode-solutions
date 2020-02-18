class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
    
        int start=0;
        int end=nums.size()-1;
        
        return making(nums,start,end);      
    }   
    TreeNode * making(vector<int>nums,int  start,int  end)
    {
        if(start==end)
        {
            TreeNode * rt=new TreeNode (nums[start]);
            return rt;
        }
        if(start>end)
        {
            return NULL;
        }
        int  mid =(start+end)/2;
        TreeNode * root = new TreeNode (nums[mid]);
        root->left=making(nums,start,mid-1);
        root->right=making(nums,mid+1,end);
        return root;    
    }
};