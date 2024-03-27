/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var intersection = function(nums1, nums2) {
    let small, big;
    if(nums1.length>nums2.length) {
        big = nums1;
        small = nums2;
    } else {
        big = nums2;
        small = nums1;
    }
    let arr3 = new Array();
    for(let i = 0; i < small.length; i++) {
        if(big.includes(small[i])) arr3.push(small[i]);
    }
    arr3 = [...new Set(arr3)]
    return arr3;
};