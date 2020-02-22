class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
          vector<int>A;
        traversingtree(root,A);
        return A[k-1];
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
