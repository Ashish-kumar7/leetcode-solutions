 static bool cmp(const vector<int>& v1, const vector<int>& v2) {
        return v1[1] == v2[1] ? v1[0] > v2[0] : v1[1] > v2[1];
    }

class Solution {
public:
    vector<int> filterRestaurants(vector<vector<int>>& restaurant, int veganFriendly, int maxPrice, int maxDistance) {
        
        int n=restaurant.size();
        vector<vector<int>>result;
        
        if(veganFriendly==1)
        {
        for(int i=0;i<n;i++)
        {
            if(restaurant[i][2]==1)
            {
                if(restaurant[i][3]<=maxPrice)
                {
                    if(restaurant[i][4]<=maxDistance)
                    {
                        result.push_back(restaurant[i]);
                    }
                }
            }            
        }
            
        }
        
        if(veganFriendly==0)
        {
        for(int i=0;i<n;i++)
        {
                if(restaurant[i][3]<=maxPrice)
                {
                    if(restaurant[i][4]<=maxDistance)
                    {
                        result.push_back(restaurant[i]);
                    }
                }           
        }
            
        }
        
        sort(result.begin(),result.end(),cmp) ;
        
       vector<int>ids;
        for(int i=0;i<result.size();i++)
        {
            ids.push_back(result[i][0]);
        }
        
        return ids;
    
    }
};