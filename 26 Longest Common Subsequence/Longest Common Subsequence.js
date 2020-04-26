/**
 * @param {string} text1
 * @param {string} text2
 * @return {number}
 */
var longestCommonSubsequence = function (text1, text2) {
    const sz1 = text1.length, sz2 = text2.length;
    let mat = [];
    for (let i = 0; i <= sz1; i++) {
        mat.push(new Array(sz2 + 1).fill(0));
    }
    for (let i = 1; i <= sz1; i++) {
        for (let j = 1; j <= sz2; j++) {
            if (text1[i - 1] == text2[j - 1])
                mat[i][j] = mat[i - 1][j - 1] + 1;
            else
                mat[i][j] = Math.max(mat[i - 1][j], mat[i][j - 1]);
        }
    }
    return mat[sz1][sz2];
};