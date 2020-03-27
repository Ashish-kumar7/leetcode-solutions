class RecentCounter {
public:
   queue<int> q;
    RecentCounter() { }
    
    int ping(int t) {
        q.push(t);
        while(t-3000 > q.front())   q.pop();
        return q.size();
    }
};