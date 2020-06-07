bool compare(vector<int>&a, vector<int>&b){
    return ( a[0] > b[0] || (a[0]==b[0] && a[1]<b[1] ) );
}
class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        
        sort(people.begin(),people.end(),compare);
        
        vector<vector<int>>Ans;
        
        for(int i=0;i<people.size();i++){
            Ans.insert(Ans.begin()+people[i][1] , people[i]);
        }
        
        return Ans;
        
    }
};