/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function(nums) {

    let mx=nums[0],sum=nums[0];
    for(let i=1;i<nums.length;i++)
    {
      nums[i]=Math.max(nums[i],sum+nums[i]);
      sum=nums[i],mx=Math.max(mx,nums[i]);
    }
    return mx;
  };