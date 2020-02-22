class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>A;
        traversingtree(root,A);
        return A;
    }
    
    void traversingtree(TreeNode * root,vector<int>&A){   
        if(root==NULL){
            return ;
        }
        
        traversingtree(root->left,A);
       
        traversingtree(root->right,A);
        
         A.push_back(root->val);
    }
};