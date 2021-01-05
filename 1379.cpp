class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(original==NULL){
            return NULL;
        }
        if(original==target){
            return cloned;
        }
        if(auto left=getTargetCopy(original->left,cloned->left,target)){
            return left;
        }
        return getTargetCopy(original->right,cloned->right,target);
        
    }
};