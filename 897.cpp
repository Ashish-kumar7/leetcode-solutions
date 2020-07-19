class Solution {
public:
    void inordertraversal(TreeNode * root1,TreeNode * & root2){
        if(root1){
            inordertraversal(root1->left,root2);
            root2->right=root1;
            root2->left=NULL;
            root2=root2->right;
            inordertraversal(root1->right,root2);
        }
    }
    TreeNode* increasingBST(TreeNode* root1) {
        if(root1==NULL){
            return NULL;
        }
        TreeNode * temp=new TreeNode (-1);
        TreeNode * root2=temp;
        inordertraversal(root1,root2);
        root2=temp->right;
        return root2;
    }
};