void sumtotal(TreeNode * root , int  value ,int & sum){
    
    if(root->left==NULL  && root->right==NULL){
         sum+=(value*10)+root->val;
        return ;
    }
    value=value*10 + root->val;
    if(root->left){
        sumtotal(root->left,value,sum);
    }
     if(root->right){
        sumtotal(root->right,value,sum);
    }
    return ;
}

class Solution {
public:
    int sumNumbers(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int value=0;
        int sum=0;
        
        sumtotal(root,value,sum);
        return sum;
    }
};