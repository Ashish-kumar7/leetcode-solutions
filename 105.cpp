class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int ins=0;
        int ine=inorder.size()-1;
        int pres=0;
        int pree=preorder.size()-1;
        return buildTree(preorder,inorder,ins,ine,pres,pree);  
    }
    TreeNode * buildTree(vector<int>preorder,vector<int>inorder,int ins,int ine,int pres,int pree){
        if(ins>ine){
            return NULL;
        }   
        int rootdata =preorder[pres];
        int rootindex=-1;
        for(int i=0;i<preorder.size();i++){
            if( inorder[i]==rootdata){
                rootindex=i;
                break;
            }
        }
        int lins=ins;
        int rins=rootindex+1;
        int line=rootindex-1;
        int rine=ine;
        int lpres=pres+1;
        int lpree=line-lins+lpres;
        int rpres=lpree+1;
        int rpree=pree;
        TreeNode * node=new TreeNode(rootdata);
        node->left=buildTree(preorder,inorder,lins,line,lpres,lpree);
        node->right=buildTree(preorder,inorder,rins,rine,rpres,rpree);
        return node;  
    }
};