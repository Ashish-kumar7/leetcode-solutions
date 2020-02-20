class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ss;
        string str2="";
         treepath(root,ss,str2);
        return ss;
    }
    void treepath(TreeNode * root,vector<string>&ss,string str2){
        if(root==NULL){
            return ;
        }
        int  a= root->val;
        string str=to_string(a);
        
        if(root->left!=NULL || root->right!=NULL)
        {
            str2=str2+str+"->";
        }
        if(root->left==NULL && root->right==NULL)
        {
             str2=str2+str;
        }
        
        if(root->left==NULL && root->right==NULL){
            ss.push_back(str2);
            return ;
        }
        
        treepath(root->left,ss,str2);
        treepath(root->right,ss,str2);
        return ;
    }
};