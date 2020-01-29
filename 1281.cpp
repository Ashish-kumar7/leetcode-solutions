class Solution {
public:
    int subtractProductAndSum(int n) {
        vector<int>A;
        while(n>0)
        {
            int a;
            a=n%10;
            n=n/10;
            A.push_back(a);
        }
        long long b=1;
        long long c=0;
        for(int i=0;i<A.size();i++)
        {
            b=b*A[i];
            c=c+A[i];
        }
       long long int d=b-c;
        
        return d;
    }
};