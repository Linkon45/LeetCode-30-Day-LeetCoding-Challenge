class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int left[nums.size()];
        int right[nums.size()];
        left[0] = 1;
        right[nums.size() - 1] = 1;
        for (int i = 1; i < nums.size(); i++)
            left[i] = left[i - 1] * nums[i - 1];
        for (int i = nums.size() - 2; i >= 0; i--)
            right[i] = right[i + 1] * nums[i + 1];
        for (int i = 0; i < nums.size(); i++)
            nums[i] = right[i] * left[i];
        return nums;
    }
};