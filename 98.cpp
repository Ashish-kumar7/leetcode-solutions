class Solution {
public:
    bool isValidBST(TreeNode* root) {
         long long min=-214748364885858;
         long long max=214748364885858;
        return checktree(root,min,max);
    }
    
    bool checktree(TreeNode * root,long long min, long long max)
    {
        if(root==NULL){
            return 1;
        }
        if(root->val >=max || root->val<=min){
            return 0;
        }
        
        return checktree(root->left,min,root->val ) &&   checktree(root->right,root->val,max );
        
        
    }
    
};