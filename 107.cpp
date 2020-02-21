class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
     
        vector<vector<int>>A;
        
        if(root==NULL)
        {
            return A;
        }
        
        queue<TreeNode *>q;
        q.push(root);
       // vector<int>B;
        while(!q.empty())
        {
            int sz=q.size();
            vector<int>B;
            while(sz--){
                
                TreeNode * node=q.front();
                q.pop();
                B.push_back(node->val);
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }  
            }
           A.push_back(B); 
        }
        vector<vector<int>>C;
        
        for(int i=(A.size()-1);i>=0;i--)
        {
         C.push_back(A[i]);   
        }
        
        
        return C;
        
        
        
    }
};