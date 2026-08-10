class MyHashSet {
private:
    int bucketSize;
    vector<list<int>> table;

    int getHash(int key) {
        return key % bucketSize;
    }

public:
    MyHashSet() {
        bucketSize = 1000;
        table.resize(bucketSize);
    }

    void add(int key) {
        int hash = getHash(key);
        auto &bucket = table[hash];

        if (find(bucket.begin(), bucket.end(), key) == bucket.end()) {
            bucket.push_back(key);
        }
    }

    void remove(int key) {
        auto &bucket = table[getHash(key)];

        auto it = find(bucket.begin(), bucket.end(), key);
        if (it != bucket.end()) {
            bucket.erase(it);
        }
    }

    bool contains(int key) {
        auto &bucket = table[getHash(key)];

        return find(bucket.begin(), bucket.end(), key) != bucket.end();
    }
};