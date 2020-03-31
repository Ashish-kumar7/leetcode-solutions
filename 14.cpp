class Solution {
public:
    string longestCommonPrefix(vector<string>& ar) {
        if(ar.size()==0)
        {
            return "";
        }
    sort(ar.begin(),ar.end());
        int n=ar.size();
        int h=ar[0].length();
    int x=min(ar[0].length(),ar[n-1].length());
    string a=ar[0];
    string b=ar[n-1];
    int i=0;
    while(i<=h && a[i]==b[i]){
        i++;
    }
    string z=b.substr(0,i);
    string oo="";
    if(i!=0)
    {
        return z;
    }
    return oo;
        
    }
};



