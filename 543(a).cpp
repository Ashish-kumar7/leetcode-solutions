class Solution {
public:
    int height(TreeNode * head){
        if(head==NULL){
            return 0;
        }
        int left=height(head->left);
        int right=height(head->right);
        return max(left,right)+1;
    }
    int diameterOfBinaryTree(TreeNode* node) {
        if(node==NULL){
          return 0;
      }
    int left_height=height(node->left);
   int  right_height=height(node->right);
   int left_daimeter=diameterOfBinaryTree(node->left);
   int right_daimeter=diameterOfBinaryTree(node->right);
   int x=left_height+right_height ;
    return max(max(right_daimeter,left_daimeter),x) ; 
    }
};