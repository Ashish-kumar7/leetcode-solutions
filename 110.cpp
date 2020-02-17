class Solution {
public:
    bool isBalanced(TreeNode* root) {        
        if(root==NULL)
        {
            return 1;
        }
        
        int ls=height(root->left);
        int rs=height(root->right);
        
        if( (abs(ls-rs)<=1) && isBalanced(root->left)!=NULL && isBalanced(root->right)!=NULL)
        {
            return 1;
        }
        
        return 0;
        
        
    }
    
    int height(TreeNode*root )
    {
        if(root==NULL)
        {
            return 0;
        }
        return 1 + max(height(root->left),height(root->right));
    }
    
};