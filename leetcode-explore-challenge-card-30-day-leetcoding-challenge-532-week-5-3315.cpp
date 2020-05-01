class Solution {
public:
    bool check(TreeNode * root ,vector<int> arr,int n,int i){
        if(root==NULL || i==n){
            return 0;
            }
        if((root->left==NULL && root->right==NULL ) && (root->val==arr[i]) && (i==n-1)  ){
            return 1;
        }
        return ( (check(root->left,arr,n,i+1) || check(root->right,arr,n,i+1) ) &&(root->val==arr[i]) );
    }
    bool isValidSequence(TreeNode* root, vector<int>& arr) {
        int n=arr.size();
        return check(root,arr,n,0);
    }
};