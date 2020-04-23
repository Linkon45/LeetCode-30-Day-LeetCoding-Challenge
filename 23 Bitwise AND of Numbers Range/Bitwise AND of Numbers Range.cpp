class Solution
{
public:
    int rangeBitwiseAnd(int m, int n)
    {
        int cnt = 0;
        while (m != n)
            cnt++, m = m >> 1, n = n >> 1;
        return m << cnt;
    }
};