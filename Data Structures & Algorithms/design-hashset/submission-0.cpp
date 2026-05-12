class MyHashSet {
   private:
    static const long size = 1000000;
    vector<list<int>> buckets;
    int hash(int key) { return key % size; }

   public:
    MyHashSet() : buckets(size) {}

    void add(int key) {
        int idx = hash(key);
        auto& bucket = buckets[idx];
        if (find(bucket.begin(),bucket.end(),key) ==  bucket.end()){
            bucket.push_back(key);
        }
    }

    void remove(int key) {
        int idx = hash(key);
        buckets[idx].remove(key);
    }

    bool contains(int key) {
        int idx = hash(key);
        auto& bucket = buckets[idx];
        return !(find(bucket.begin(),bucket.end(),key) ==  bucket.end());
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */