/**
 * @param {string[]} strs
 * @return {string[][]}
 */
var groupAnagrams = function (strs) {
    let map = new Map();
    strs.forEach(element => {
      let str = element.split('').sort().join('');
      let temp = [];
      if (map.has(str))
        temp = map.get(str);
      temp.push(element);
      map.set(str, temp);
    });
    return Array.from(map.values());
  };