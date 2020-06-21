class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        int m=n;
        for(int i=0;i<n;i++){
          //  cout<<n<<endl;
            if(citations[i]>=m){
                return m;
            }
            else {
                m--;
            }
        }
        return m;
    }
};