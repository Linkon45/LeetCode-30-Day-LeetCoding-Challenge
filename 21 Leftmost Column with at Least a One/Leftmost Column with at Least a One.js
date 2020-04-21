/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * function BinaryMatrix() {
 *     @param {integer} x, y
 *     @return {integer}
 *     this.get = function(x, y) {
 *         ...
 *     };
 *
 *     @return {[integer, integer]}
 *     this.dimensions = function() {
 *         ...
 *     };
 * };
 */

/**
 * @param {BinaryMatrix} binaryMatrix
 * @return {number}
 */
var leftMostColumnWithOne = function (binaryMatrix) {
    let dim = binaryMatrix.dimensions();
    let x = 0, y = dim[1] - 1, n = dim[0], m = dim[1];
    let ans = -1;
    while ((0 <= x && x < n) && (0 <= y && y < m)) {
        if (binaryMatrix.get(x, y) == 1) {
            ans = y;
            y--;
        }
        else
            x++;
    }
    return ans;

};