
class Solution {
public:
    int minDiffInBST(TreeNode* root) {
        
        vector<int>A;
        mintraversal(root,A);
        
        int diff=0;
        int min_diff=1000;
        int n=A.size();
    
        for(int i=0;i<(n-1);i++)
        {
          diff=abs(A[i+1]-A[i]);
            if(diff<=min_diff)
            {
                min_diff=diff;
            }
        }
        
        return min_diff;
    }
    
    
   void mintraversal(TreeNode * root,vector<int> &A)
    {
       
       if(root==NULL)
       {
           return ;
       }
       
        mintraversal(root->left,A);
        A.push_back(root->val);
        mintraversal(root->right,A);
        
    }
};