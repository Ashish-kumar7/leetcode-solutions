class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>A;
        if(root==NULL){
            return A;
        }
        
        stack<TreeNode*>q1;
        stack<TreeNode*>q2;
        
          q1.push(root);

        while(!q1.empty())
        {
        vector<int>B;
        int sz1=q1.size();
        while(sz1--){
            TreeNode * node =q1.top();
            q1.pop();
            B.push_back(node->val);
            if(node->left){
                q2.push(node->left);
            }
            if(node->right){
                q2.push(node->right);
            }
        }
        if(B.size()!=0){
        A.push_back(B);
        }
            B.clear();
        int sz2=q2.size();
            
        while(sz2--){
            TreeNode * node =q2.top();
            q2.pop();
            B.push_back(node->val);
            if(node->right)
            {
                q1.push(node->right);
            }
            if(node->left)
            {
                q1.push(node->left);
            }  
        }
        if(B.size()!=0){
        A.push_back(B); 
        }
        }   
        return A;
    }
};