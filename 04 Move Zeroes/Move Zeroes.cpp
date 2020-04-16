class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int nonZero = 0, index = 0, flag = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
                nonZero++;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0 && flag == 0)
            {
                nums[index] = nums[i];
                if (i >= nonZero)
                    nums[i] = 0;
                index++;
                if (index == nonZero)
                    flag = 1;
            }
            else
                nums[i] = 0;
        }
    }
};