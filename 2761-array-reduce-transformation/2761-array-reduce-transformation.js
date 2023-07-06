/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    let acc = init;
    const size = nums.length;
    for(let i = 0; i < size; i++){
        acc = fn(acc, nums[i]);
    }
    return acc;
};