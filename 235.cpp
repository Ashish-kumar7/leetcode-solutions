class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL)
        {
            return NULL;
        }
        if(root->val== p->val || root->val==q->val)
        {
            return root;
        }
        TreeNode * left_node=lowestCommonAncestor(root->left,p,q);
        TreeNode * right_node=lowestCommonAncestor(root->right,p,q);
        
        if(left_node!=NULL  && right_node!=NULL)
        {
            return root;
        }
        return (left_node!=NULL) ? left_node : right_node;
    }
};