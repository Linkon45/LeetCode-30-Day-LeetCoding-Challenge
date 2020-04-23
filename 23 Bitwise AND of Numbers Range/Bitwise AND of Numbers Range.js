/**
 * @param {number} m
 * @param {number} n
 * @return {number}
 */
var rangeBitwiseAnd = function (m, n) {
    let cnt = 0;
    while (m != n)
        cnt++, m = m >> 1, n = n >> 1;
    return m << cnt;

};