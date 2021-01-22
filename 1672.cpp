class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        long long int maxi=0;
        for(int i=0;i<accounts.size();i++){
            long long int sum=0;;
            for(int j=0;j<accounts[i].size();j++){
                sum+=(accounts[i][j]);
            }
            maxi=max(maxi,sum);
        }
        return maxi;

    }
    
};