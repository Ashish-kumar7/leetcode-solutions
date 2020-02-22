class Solution {
public:
    int sumNumbers(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        vector<int>A;
        findingsolution(root,A,0);
        int sum=0;
        for(int i=0;i<A.size();i++){   
            cout<<A[i]<<endl;
            sum=sum+A[i];
        }
        return sum;
    }
    
    void findingsolution(TreeNode* root,vector<int>&A,int  value){
        
        if(root->left==NULL && root->right==NULL){
            A.push_back(value*10 + root->val);
            return ;
        }
        value=(value)*10 + root->val ;
        if(root->left) findingsolution(root->left,A,value);
        if(root->right) findingsolution(root->right,A,value);
        return ;
    }
    
} ;