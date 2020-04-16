class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        map<int, int> mp;
        int ans;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second == 1)
            {
                ans = it->first;
                break;
            }
        }
        return ans;
    }
};