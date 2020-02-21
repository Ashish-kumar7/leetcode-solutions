/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>>B;

       if(root==NULL)
        {
            return B;
        }
        
        queue<TreeNode*>q;
        
        TreeNode * node=root;
        q.push(node);
        while(!q.empty()){
        vector<int>A;
        int sz=q.size();
        while(sz--)
        {
            TreeNode *  node =q.front();
            A.push_back(node->val);
            q.pop();
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }  
        }
        B.push_back(A);
        }  
        return B;
    }
};