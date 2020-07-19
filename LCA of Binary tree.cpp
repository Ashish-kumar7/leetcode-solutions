Node* lca(Node* root ,int n1 ,int n2 ){
   if(root==NULL){
       return NULL;
   }
   if(n1==root->data ||  n2==root->data){
       return root;
   }
   Node * left=lca(root->left,n1,n2);
   Node * right=lca(root->right,n1,n2);
   
   if(left==NULL && right==NULL){
       return NULL;
   }
   if(left!=NULL && right!=NULL){
       return root;
   }
   if(left==NULL && right!=NULL){
       return  right;
   }
   if(right==NULL && left!=NULL){
       return left;
   }
}