
class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>A1;
        vector<int>A2;
        searchTree(root1,A1);
        searchTree(root2,A2);
        return A1==A2;
    }
    
    
    void searchTree(TreeNode *root , vector<int>&A){
        if(root==NULL){
            return ;
        }
        if(root->left==NULL && root->right==NULL){
            A.push_back(root->val);
        }
        searchTree(root->left,A);
        searchTree(root->right,A);
    }
    
    
};