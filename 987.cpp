class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root){
    vector<vector<int>>A;
    map<int,vector<pair<int,int>>>mp;
    int hd=0;
    int depth=0;
    filling_the_map(root, hd,depth,mp);
    map<int,vector<pair<int,int>>>:: iterator it;
        for(it=mp.begin();it!=mp.end();it++){
            sort((it->second).begin(),(it->second).end());
            vector<int>B;
            for(int i=0;i<it->second.size();i++){
                B.push_back(it->second[i].second);
            }
            A.push_back(B);
        }   
        return A;
    }
    
    void filling_the_map(TreeNode * root,int hd,int depth,map<int,vector<pair<int,int>>>&mp){
    if(root==NULL){
        return ;
    }
    mp[hd].push_back( make_pair(depth,root->val) );
    filling_the_map(root->left,hd-1,depth+1,mp);
    filling_the_map(root->right,hd+1,depth+1,mp);
}  
};