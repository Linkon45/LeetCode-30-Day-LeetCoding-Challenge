/**
 * @param {number[]} nums
 * @return {number}
 */
var findMaxLength = function (nums) {
    let mp = new Map(), cumSum = 0, mx = 0;
    for (let i = 0; i < nums.length; i++) {
        if (nums[i] == 0)
            cumSum -= 1;
        else
            cumSum += 1;
        if (cumSum == 0)
            mx = Math.max(mx, i + 1);
        else if (mp.has(cumSum))
            mx = Math.max(mx, i - (mp.get(cumSum)));
        else
            mp.set(cumSum, i);
    }
    return mx;
};