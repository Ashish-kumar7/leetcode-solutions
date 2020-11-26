class Solution {
public:
    int solve(string s,int begin,int end,int k){
        if(end<k){
            return 0;
        }
        int arr[26]={0};
    
        for(int i=begin;i<end;i++){
            arr[s[i]-'a']++;
        }
        int start=begin;
        for(int mid=start;mid<end;mid++){
            if(arr[s[mid]-'a']>0 && arr[s[mid]-'a']>=k ){
                continue;
            }
            return max(solve(s,start,mid,k),solve(s,mid+1,end,k));
        }
        return end-start;
    }
    int longestSubstring(string s, int k) {
        return solve(s,0,s.length(),k);
    }
};