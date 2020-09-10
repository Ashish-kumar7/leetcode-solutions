void solve ( TreeNode * root, int value, int  & ans){
    if(root->left==NULL && root->right==NULL){
        ans+=(value*2 + root->val);
        return ;
    }
    value=( value*2 ) + root->val;
    
    if(root->left) solve(root->left,value,ans);
        if(root->right) solve(root->right,value,ans);
        return ;
}
class Solution {
public:
    int sumRootToLeaf(TreeNode* root) {
        int value=0;
        int ans=0;
        solve(root,value,ans);
        return ans;
    }
};
