class Solution
{
public:
    int longestCommonSubsequence(string text1, string text2)
    {
        int sz1 = text1.size(), sz2 = text2.size();
        int mat[sz1 + 1][sz2 + 1];
        for (int i = 0; i <= sz1; i++)
            mat[i][0] = 0;
        for (int i = 0; i <= sz2; i++)
            mat[0][i] = 0;
        for (int i = 1; i <= sz1; i++)
        {
            for (int j = 1; j <= sz2; j++)
            {
                if (text1[i - 1] == text2[j - 1])
                    mat[i][j] = mat[i - 1][j - 1] + 1;
                else
                    mat[i][j] = max(mat[i - 1][j], mat[i][j - 1]);
            }
        }
        return mat[sz1][sz2];
    }
};