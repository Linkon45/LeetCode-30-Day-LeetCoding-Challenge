class Solution
{
public:
    bool isHappy(int n)
    {
        map<int, int> mp;
        bool flag;
        while (1)
        {
            int sum = 0;
            while (n > 0)
            {
                int temp = n % 10;
                sum += (temp * temp);
                n /= 10;
            }
            n = sum;
            if (mp[n] == 1)
            {
                flag = false;
                break;
            }
            if (n == 1)
            {
                flag = true;
                break;
            }
            mp[n]++;
        }
        if (flag)
            return true;
        else
            return false;
    }
};