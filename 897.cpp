class Solution {
public:
    TreeNode* increasingBST(TreeNode* root) {
        
        vector<int>A;
        making(root,A);
        //vector mei sare elemnts aa gye hain abhi tak.
        
        int start=0;
        int end=A.size()-1;
        return makingpart2 (A,start); 
    }
    
    void making (TreeNode * root ,vector<int>&A){
        if(root==NULL){
            return ;
        }
        making(root->left,A);
        A.push_back(root->val);
        making(root->right,A);
        return ;
    }
    
    TreeNode * makingpart2(vector<int>A,int start)
    {
        if(start> A.size()-1){
            return NULL;
        }
        TreeNode * root=new TreeNode(A[start]);
        root->right=makingpart2(A,start+1);
        return root;
    }
    
    
};