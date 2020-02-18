class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        vector<int>A;
        int value=0;
        tosearch(root,value,A);
        int jj=A.size();
        for(int i=0;i<jj;i++){   
            if(A[i]==sum){
                return 1;
            }
        }
        return 0;   
    }
    void tosearch(TreeNode * root ,int value, vector<int>&A){
        if(root==NULL){
            return ;
        }
        value=value+root->val;
        if(root->left==NULL && root->right==NULL){
            A.push_back(value);
            return ;
        } 
        tosearch(root->left,value,A) ;
        tosearch(root->right,value,A);
        return ;
    }
};