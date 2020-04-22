class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        int cumSum = 0;
        map<int, int> mp;
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            cumSum += nums[i];
            if (cumSum == k)
                cnt++;
            if (mp.find(cumSum - k) != mp.end())
                cnt += mp[cumSum - k];
            mp[cumSum]++;
        }
        return cnt;
    }
};