class LRUCache {
private:
    unordered_map<int, pair<int, list<int>::iterator>> cacheObj; 
    list<int> LRUObj; 
    int capacity_;
    
public:
    LRUCache(int capacity) {
        capacity_ = capacity;
    }

    void useItem(unordered_map<int, pair<int, list<int>::iterator>>::iterator& iter) {
        LRUObj.erase(iter->second.second);
        LRUObj.push_front(iter->first);
        iter->second.second = LRUObj.begin();
    }

    int get(int key) {
        auto iter = cacheObj.find(key);
        if (iter == cacheObj.end()) {
            return -1;
        }
        useItem(iter);
        return iter->second.first;
    }
    
    void put(int key, int value) {
        // If the key exists
        auto iter = cacheObj.find(key);
        if (iter != cacheObj.end()) {
            useItem(iter);
            cacheObj[key] = {value, LRUObj.begin()};
            return;
        }
        if (capacity_ == cacheObj.size()) {
            cacheObj.erase(LRUObj.back());
            LRUObj.pop_back();
        }
        LRUObj.push_front(key);
        cacheObj.insert({key, {value, LRUObj.begin()}});
        return;
    }
};