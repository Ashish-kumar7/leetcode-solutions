class Solution {
public:
    int findSecondMinimumValue(TreeNode* root) {
       vector<int>A;
        treetraversal(root,A);
        map<int,int>mp1;
        int key;
        int value=0;
        for(int i=0;i<A.size();i++){
            key=A[i];
            mp1[key]++;
        }
        map<int,int>  :: iterator it;
        int count=0;
        int pp;
        for(it=mp1.begin();it!=mp1.end();++it){
            cout<<it->first<<endl;
            if(count==1){
                pp=it->first;
            }
            count++;
        }
        if(count<=1){
            return -1;
        }
        return pp;
    }
    void treetraversal(TreeNode * root,vector<int>&A){   
        if(root==NULL){
            return ;
        }
        treetraversal(root->left,A);
        A.push_back(root->val);
        treetraversal(root->right,A);
    }
};