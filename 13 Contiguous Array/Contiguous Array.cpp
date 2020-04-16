class Solution
{
public:
    int findMaxLength(vector<int> &nums)
    {
        map<int, int> mp;
        int cumSum = 0;
        int mx = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
                cumSum -= 1;
            else
                cumSum += 1;

            if (cumSum == 0)
            {
                mx = max(mx, i + 1);
            }
            else if (mp.find(cumSum) != mp.end())
            {
                mx = max(mx, i - (mp[cumSum]));
            }
            else
            {
                mp[cumSum] = i;
            }
        }
        return mx;
    }
};