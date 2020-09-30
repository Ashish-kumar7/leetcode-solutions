class Solution {
public:
    int largestOverlap(vector<vector<int>>& A, vector<vector<int>>& B) {
        vector<int> LA, LB;
        const int N = A.size();
        const int base = 2*N-1; // Note1
        unordered_map<int, int> count;
        for(int i = 0; i < N; i++)
            for(int j = 0; j < N; j++){
                if(A[i][j] == 1) LA.push_back(i*base+j);
                if(B[i][j] == 1) LB.push_back(i*base+j);
            }      
        for (int i : LA) for (int j : LB) count[i - j]++;
        int res = 0;
        for (auto it : count) res = max(res, it.second);
        return res;
    }
};