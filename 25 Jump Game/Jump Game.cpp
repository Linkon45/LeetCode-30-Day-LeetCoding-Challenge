class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        int mx = nums[0];
        if (nums[0] == 0 && nums.size() > 1)
            return false;
        for (int i = 1; i < nums.size(); i++)
        {
            mx--;
            mx = max(mx, nums[i]);
            if (mx == 0 && i != nums.size() - 1)
                return false;
        }
        return true;
    }
};