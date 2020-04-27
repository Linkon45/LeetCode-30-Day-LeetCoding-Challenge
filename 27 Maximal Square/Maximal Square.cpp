class Solution
{
public:
    int maximalSquare(vector<vector<char>> &matrix)
    {
        int mx = 0;
        if (matrix.size() == 0)
            return 0;
        int mat[matrix.size() + 1][matrix[0].size() + 1];
        for (int i = 0; i <= matrix.size(); i++)
            mat[i][0] = 0;
        for (int i = 0; i <= matrix[0].size(); i++)
            mat[0][i] = 0;
        for (int i = 1; i <= matrix.size(); i++)
        {
            for (int j = 1; j <= matrix[0].size(); j++)
            {
                if (matrix[i - 1][j - 1] == '0')
                    mat[i][j] = 0;
                else
                {
                    mat[i][j] = min(min(mat[i][j - 1], mat[i - 1][j]), mat[i - 1][j - 1]) + 1;
                    mx = max(mx, mat[i][j]);
                }
            }
        }
        return mx * mx;
    }
};