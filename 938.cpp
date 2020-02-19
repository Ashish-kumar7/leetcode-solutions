class Solution {
public:
    int rangeSumBST(TreeNode* root, int L, int R) {
        int sum=0;
        rangeSumBST2(root,L,R,sum);
        return sum; 
    }
    void rangeSumBST2(TreeNode* root, int L, int R ,int & sum){   
        if(root==NULL){
            return ;
        }
        if((root->val) <= R &&  (root->val) >= L){
            sum=sum+(root->val);
        }
         rangeSumBST2(root->left,L,R,sum ) ;
         rangeSumBST2(root->right,L,R,sum ) ;
        return ;
    }    
};