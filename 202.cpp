class Solution {
public:
    bool isHappy(int n) {
        
        
       unordered_map<int,bool>mp;
        
       while(n!=1) 
       {
        if(mp.count(n)!=NULL)
             {
                 return False;
            }
       mp[n]=True;
           
        int k=0;
        while(n!=0)
            {
                l=n%10;
                k=k+(l*l);
                n=n/10;
            }
           n=k;
       } 
        
        return true;
    }
};