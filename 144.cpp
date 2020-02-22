

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>A;
        traversingtree(root,A);
        return A;
    }
    
    void traversingtree(TreeNode * root,vector<int>&A){   
        if(root==NULL){
            return ;
        }
         A.push_back(root->val);
        traversingtree(root->left,A);
       
        traversingtree(root->right,A);
    }
};