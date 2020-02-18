class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        int a;
        if(root!=NULL){
             a=root->val;
        }
        return checkingit(root,a);   
    }
    bool checkingit(TreeNode * root ,int & a){
        if(root==NULL){
            return 1;
        }
        if( root->val!=a){
            return 0;
        }
        checkingit(root->left,a);
        checkingit(root->right,a);
        return checkingit(root->left,a) && checkingit(root->right,a);
    }
};