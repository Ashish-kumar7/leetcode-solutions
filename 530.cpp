class Solution {
public:
    int getMinimumDifference(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        vector<int>A;
        traversal(root ,A);
        int min=INT_MAX;
        for(int i=0;i<(A.size()-1);i++){
            if(abs(A[i+1]-A[i]) < min){
                min=(A[i+1]-A[i]);
            }
        }
        return min;
    }
    void traversal(TreeNode * root,vector<int>&A){   
        if(root==NULL){
            return ;
        }
        traversal(root->left,A);
        A.push_back(root->val);
        traversal(root->right,A);
    }
};