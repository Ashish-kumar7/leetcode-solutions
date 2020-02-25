class Solution {
public:
    TreeNode* buildTree(vector<int>& postorder, vector<int>& inorder) {
        int ins=0;
        int ine=inorder.size()-1;
        int posts=0;
        int poste=postorder.size()-1;
        return treehelper(postorder,inorder,ins,ine,posts,poste);  
    }
    TreeNode * treehelper(vector<int>in,vector<int>pos, int inS, int inE , int posS, int posE){
    if(inS >inE){
        return NULL;
    }
    int rootdata=pos[posE];
    int rootindex;
    for(int i=inS;i<=inE;i++){
        if(in[i]==rootdata){
            rootindex=i;
            break;
        }
    }
    int rootindex1;
    for(int j=posS;j<=posE;j++){
        if(pos[j]==rootdata){
            rootindex1=j;
            break;
        }
    } 
    int LinS=inS;
    int LinE=rootindex-1;
    int LposS=posS;
    int LposE=LinE-LinS+LposS;
    int RinS=rootindex+1;
    int RinE=inE;
    int RposS=LposE+1;
    int RposE=rootindex1-1;
  TreeNode * node1= new TreeNode(rootdata);
  node1->left=treehelper(in,pos,LinS,LinE,LposS,LposE);
  node1->right=treehelper(in,pos,RinS,RinE,RposS,RposE);
   return node1; 
}
};