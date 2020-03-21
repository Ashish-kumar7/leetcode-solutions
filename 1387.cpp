class Solution {
public:
    int getKth(int lo, int hi, int k) {
        vector<vector<int>>A;
        
        for(int i=lo;i<=hi;i++){   
            int count=0;
            int num=i;
             while(num>1){
                  if(num%2==0){
                    num=num/2;
                }
                 
                else{
                    num=((num*3) +1);
                }
                count++;
            } 
          vector<int> v = { count, i };
            A.push_back(v);
        }
        
        sort(A.begin(),A.end());
        
        return A[k-1][1];
    }
};