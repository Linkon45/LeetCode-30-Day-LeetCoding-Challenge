class LRUCache
{
    map<int, int> mp;
    list<int> cache;
    int capacity;

public:
    LRUCache(int capacity)
    {
        this->capacity = capacity;
    }

    int get(int key)
    {
        list<int>::iterator it = find(cache.begin(), cache.end(), key);
        if (it != cache.end())
        {
            cache.erase(it);
            cache.push_back(key);
            return mp[key];
        }
        else
            return -1;
    }
    void put(int key, int value)
    {
        list<int>::iterator it = find(cache.begin(), cache.end(), key);
        if (it != cache.end())
            cache.erase(it);
        if (cache.size() == capacity)
            cache.pop_front();
        cache.push_back(key);
        mp[key] = value;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */