class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>A;
        queue<TreeNode *>q;
        q.push(root);
        while(!q.empty()){
            int sz=q.size();
            double sum=0;
            double p=sz;
            while(sz--){
                TreeNode * node=q.front();
                q.pop();
                sum=sum+ (node->val);
              if(node->left)  q.push(node->left);
               if(node->right) q.push(node->right);
            }
            double kk=sum/p;
            A.push_back(kk);
        }
        return A;       
    }
};