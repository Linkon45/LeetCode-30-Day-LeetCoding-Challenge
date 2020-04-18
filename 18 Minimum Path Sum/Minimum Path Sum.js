/**
 * @param {number[][]} grid
 * @return {number}
 */
var minPathSum = function (grid) {
    if (grid.length == 0 || grid[0].length == 0)
        return 0;
    let dp = [];
    for (let i = 0; i < grid.length; i++) {
        dp.push([]);
    }
    for (let i = 0; i < grid.length; i++) {
        for (let j = 0; j < grid[i].length; j++) {
            if (i > 0 && j > 0)
                dp[i][j] = grid[i][j] + Math.min(dp[i - 1][j], dp[i][j - 1]);
            else if (j > 0)
                dp[i][j] = grid[i][j] + dp[i][j - 1];
            else if (i > 0)
                dp[i][j] = grid[i][j] + dp[i - 1][j];
            else
                dp[i][j] = grid[i][j];
        }
    }
    return dp[grid.length - 1][grid[0].length - 1];
};