class Solution {
public:
    bool isHappy(int n) {
       unordered_map<int,bool>mp;
        
       while(n!=1) 
       {
        if(mp.count(n))
             {
                 return 0;
            }
       mp[n]=1;
           
        int k=0;
        while(n!=0)
            {   
                k+=(n%10)*(n%10);
                n=n/10;
            }
           n=k;
       } 
        
        return 1;
    }
};