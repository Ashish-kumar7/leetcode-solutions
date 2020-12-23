class Solution {
public:
    int nextGreaterElement(int x) {
        
        string A=to_string(x);
        
        int n=A.length();
        
        int l;
        
        for(int i=n-1;i>0;i--){
            if(A[i]>A[i-1]){
                l=i;
                break;
            }
        }
        
        l=l-1;
        
        if(l<0){
            return -1;
        }
        
        
        int k;
        
        for(int j=n-1;j>l;j--){
           if(A[j]>A[l]){
               k=j;
               break;
           } 
        }
        
        swap(A[k],A[l]);
        reverse(A.begin()+l+1,A.end());

        
        stringstream geek(A); 
  
    long long int xx = 0; 
    geek >> xx;
        
        if(xx>INT_MAX){
            return -1;
        }
        
        
        return xx;
    }
};