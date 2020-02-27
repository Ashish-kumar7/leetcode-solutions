class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        
        if(root==NULL){
            return 1;
        }
        vector<int>A;
        traversal(root,A);
        int n=A.size();
        int a=A[0];
        int b=A[n-1];
        int i=1;
        int j=1;
        while(a<b){
            if((a+b)==k){
                return 1;
            }
            else if((a+b)>k){
                b=A[n-j];
                j++;
            }
            else if((a+b)<k){
                a=A[i];
                i++;
            }
        }
        return 0;
    }

    void traversal(TreeNode * root,vector<int>&A){
        if(root==NULL){
            return ;
        }
       if(root->left) traversal(root->left,A);
        A.push_back(root->val);
        if(root->right) traversal(root->right,A);
        
    }
};