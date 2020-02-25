class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int left=minDepth(root->left);
        int right=minDepth(root->right);
        int depth;
        if(left>0 && right>0){
            depth=(left>right)? right : left;
        }
        else {
            depth=(left>right) ? left : right;   
        }
        return (1+depth);   
    }
};