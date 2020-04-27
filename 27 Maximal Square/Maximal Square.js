/**
 * @param {character[][]} matrix
 * @return {number}
 */
var maximalSquare = function (matrix) {
    let mx = 0;
    if (matrix.length == 0)
        return 0;
    let mat = [];
    for (let i = 0; i <= matrix.length; i++)
        mat.push(new Array(matrix[0].length + 1).fill(0));
    for (let i = 1; i <= matrix.length; i++) {
        for (let j = 1; j <= matrix[0].length; j++) {
            if (matrix[i - 1][j - 1] == '0')
                mat[i][j] = 0;
            else {
                mat[i][j] = Math.min(Math.min(mat[i][j - 1], mat[i - 1][j]), mat[i - 1][j - 1]) + 1;
                mx = Math.max(mx, mat[i][j]);
            }
        }
    }
    return mx * mx;
};