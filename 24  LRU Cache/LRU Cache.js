/**
 * @param {number} capacity
 */
let mp, cache = [], cap;
var LRUCache = function (capacity) {
    mp = new Map(), cache = [];
    cap = capacity;
};

/** 
* @param {number} key
* @return {number}
*/
LRUCache.prototype.get = function (key) {

    if (cache.includes(key)) {
        cache.splice(cache.indexOf(key), 1);
        cache.push(key);
        return mp.get(key);
    }
    else
        return -1;

};

/** 
* @param {number} key 
* @param {number} value
* @return {void}
*/
LRUCache.prototype.put = function (key, value) {
    if (cache.includes(key))
        cache.splice(cache.indexOf(key), 1);
    if (cache.length === cap)
        cache.shift();
    cache.push(key);
    mp.set(key, value);
};

/**
* Your LRUCache object will be instantiated and called as such:
* var obj = new LRUCache(capacity)
* var param_1 = obj.get(key)
* obj.put(key,value)
*/