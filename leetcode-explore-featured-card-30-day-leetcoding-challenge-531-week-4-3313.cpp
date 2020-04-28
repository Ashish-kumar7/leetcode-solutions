class FirstUnique {
    unordered_map<int,list<int>:: iterator> mp;
    list<int>keys;
    public:
    FirstUnique(vector<int>& nums) {
        for(int n:nums){
            add(n);
        }
    }
    int showFirstUnique() {
        if(keys.size()){
            return keys.front();
        }
        else{
            return -1;
        }
    }
    void add(int n) {
        if(mp.find(n)!=mp.end()){
                list<int>::iterator it=mp[n];
                if(it!=keys.end()){
                    keys.erase(it);
                    mp[n]=keys.end();
                } 
            }
            else{
                keys.push_back(n);
                list<int>:: iterator it=keys.end();
                it--;
                mp[n]=it;
            }    
    }
};