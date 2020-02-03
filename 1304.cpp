class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>A;
        if(n%2==0)
        {
          for(int i=-(n/2);i<0;i++)
          {
              A.push_back(i);
          }
            for(int i=1;i<=(n/2);i++)
          {
              A.push_back(i);
          }
            
        }
     
        if(n%2!=0)
        {
          for(int i=-(n/2);i<=(n/2);i++)
          {
              A.push_back(i);
          }
        }
        return A;
    }
};