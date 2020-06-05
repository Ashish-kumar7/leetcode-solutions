
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if(root==NULL){
            return 0;
        }
        else{
            int subsum=0;
            bool ans=0;
            subsum=sum-root->val;
            if(subsum==0 && root->left==NULL && root->right==NULL){
                return 1;
            }
            if(root->left!=NULL){
                ans=ans || hasPathSum(root->left,subsum);
            }
            if(root->right!=NULL){
                ans=ans || hasPathSum(root->right,subsum);
            }
            return ans;
        }
    }
};