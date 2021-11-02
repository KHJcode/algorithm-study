var twoSum = function(nums, target) {
  for (let i in nums) {
    const index = nums.indexOf(target - nums[i]);
    if (index !== -1 && index !== parseInt(i)) return [i, index];
  }
};
