/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int x, int y);
 *     vector<int> dimensions();
 * };
 */

class Solution
{
public:
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix)
    {
        vector<int> dim = binaryMatrix.dimensions();
        int x = 0, y = dim[1] - 1;
        int n = dim[0], m = dim[1];
        int ans = -1;
        while ((0 <= x && x < n) && (0 <= y && y < m))
        {
            if (binaryMatrix.get(x, y) == 1)
            {
                ans = y;
                y--;
            }
            else
                x++;
        }
        return ans;
    }
};