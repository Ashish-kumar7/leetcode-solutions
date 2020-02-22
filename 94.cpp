class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>A;
        traversingtree(root,A);
        return A;
    }
    
    void traversingtree(TreeNode * root,vector<int>&A){   
        if(root==NULL){
            return ;
        }
        traversingtree(root->left,A);
        A.push_back(root->val);
        traversingtree(root->right,A);
    }
};