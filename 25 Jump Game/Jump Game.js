/**
 * @param {number[]} nums
 * @return {boolean}
 */
var canJump = function (nums) {
    let mx = nums[0];
    if (nums[0] == 0 && nums.length > 1)
        return false;
    for (let i = 1; i < nums.length; i++) {
        mx--;
        mx = Math.max(mx, nums[i]);
        if (mx == 0 && i != nums.length - 1)
            return false;
    }
    return true;
};