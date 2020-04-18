/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var moveZeroes = function (nums) {
    let cnt = 0;
    for (let i = nums.length - 1; i >= 0; i--) {
      if (nums[i] == 0) {
        cnt++;
        nums.splice(i, 1);
      }
    }
    while (cnt--)
      nums.push(0);
    return nums;
  
  };