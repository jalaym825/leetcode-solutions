/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    if(nums.length == 0) return init;
    let val = init;
    nums.forEach(x => {
        val = fn(val, x);
    })
    return val;
};