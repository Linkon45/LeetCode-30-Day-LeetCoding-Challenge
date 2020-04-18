/**
 * @param {number[]} arr
 * @return {number}
 */
var countElements = function (arr) {
    const map = new Map();
    arr.forEach(element => {
        if (map.has(element)) {
            let x = map.get(element);
            x++;
            map.set(element, x);
        }
        else
            map.set(element, 1);
    });
    let count = 0;
    map.forEach((value, key) => {
        if (map.has(key + 1)) {
            count += value;
        }
    });
    return count;
};