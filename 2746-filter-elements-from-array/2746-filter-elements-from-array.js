/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    const newArr = [];
    const size = arr.length
    for(let i = 0; i < size; i++) {
        if (fn(arr[i], i)) {
            newArr.push(arr[i]);
        }
    }
    return newArr;
};