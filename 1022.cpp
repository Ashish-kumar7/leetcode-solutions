class Solution {
public:
    int sumtotal(TreeNode * root,int value)
    {
        if(root==NULL)
        {
            return 0;
        }
        value=(value*2)+ (root->val);
        
        if(root->left==NULL && root->right==NULL)
        {
            return value;
        }
        return sumtotal(root->left,value) + sumtotal(root->right,value);  
    }
    
    int sumRootToLeaf(TreeNode* root) {
        int val=0;
        return sumtotal(root,val);
    }
};