class Solution {
public:
    int getSum(int a, int b) {
        
        vector<int>v;
        v.push_back(a);
        v.push_back(b);
        return accumulate(v.begin(),v.end(),0);
    }
};