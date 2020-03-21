class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int result=INT_MIN;
    Pathofsum(root,result);
    return result;
    }
    
  int Pathofsum(TreeNode *root,int & result){
    if(root==NULL){
        return 0;
    }
      
   int left=Pathofsum(root->left,result);
      
   int right=Pathofsum(root->right,result);
      
   int greaterofthem=max((max(left,right)+root->val),root->val);
      
   int greatervalue=max(greaterofthem,root->val+left+right);
      
   result=max(result,greatervalue);
      
    return greaterofthem;
}  
    
};

