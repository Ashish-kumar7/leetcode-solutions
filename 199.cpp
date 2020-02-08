class Solution {
public:
    
    void rightnodes(TreeNode* root,int level,int & maxlevel,vector<int>&AA)
    {
         if(root==NULL){
            return ;
            
        }
        if(level> maxlevel){
            AA.push_back(root->val);
            maxlevel=level;
        }
        rightnodes(root->right,level+1,maxlevel,AA);   
        rightnodes(root->left,level+1,maxlevel,AA);
        
    }
    
    vector<int> rightSideView(TreeNode* root) {
        int maxlevel=0;
        int level=1;
        vector<int>AA;
        rightnodes(root, level ,maxlevel,AA);
        return AA;
    }
};