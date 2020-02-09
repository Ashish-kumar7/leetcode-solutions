class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        
      return   isSymmetric1(root,root);
    }
    
    bool isSymmetric1(TreeNode * root1,TreeNode * root2)
    {
        if(root1==NULL && root2==NULL)
        {
            return 1;
        }
        if(root1!=NULL && root2!=NULL && root1->val==root2->val)
        {
            return isSymmetric1(root1->left,root2->right) &&  isSymmetric1(root1->right,root2->left);
        }
        return 0;
    }
    
};