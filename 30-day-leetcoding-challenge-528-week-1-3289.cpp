class Solution {
public:
    int countElements(vector<int>& arr) {
        map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        int sum=0;        
        for(int j=0;j<arr.size();j++){   
            if(mp.find(arr[j]+1)!=mp.end()){
                sum++;
            }
        }
        return sum;
    }
};