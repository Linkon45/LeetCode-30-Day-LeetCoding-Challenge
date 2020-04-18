/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function (nums) {
    let set = new Set();
    nums.forEach((element) => {
      if (set.has(element)) {
        set.delete(element);
      } else set.add(element);
    });
    let x;
    set.forEach((element) => {
      x = element;
    });
    return x;
  };
  