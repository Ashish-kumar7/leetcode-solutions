
class Solution {
public:
    int countNodes(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int left_height=1;
        TreeNode * left= root->left;
        while(left!=NULL){
            left=left->left;
            left_height++;
        }
         int right_height=1;
        TreeNode * right= root->right;
        while(right!=NULL){
            right=right->right;
            right_height++;
        }
        if(right_height==left_height){
            return pow(2,right_height) -1 ;
        }
        
        return 1 + countNodes(root->left) + countNodes(root->right);         
    }
};