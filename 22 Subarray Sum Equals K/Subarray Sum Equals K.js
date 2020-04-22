/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var subarraySum = function (nums, k) {
    let cumSum = 0;
    let mp = new Map();
    let cnt = 0;
    for (let i = 0; i < nums.length; i++) {
        cumSum += nums[i];
        if (cumSum == k)
            cnt++;
        if (mp.has(cumSum - k))
            cnt += mp.get(cumSum - k);
        let x = 0;
        if (mp.has(cumSum))
            x = mp.get(cumSum);
        mp.set(cumSum, x + 1);
    }
    return cnt;
};