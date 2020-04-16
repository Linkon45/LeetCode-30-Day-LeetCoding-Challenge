class Solution
{
public:
    int lastStoneWeight(vector<int> &stones)
    {
        sort(stones.begin(), stones.end());
        while (1)
        {
            if (stones.size() < 2)
            {
                break;
            }
            int diff = stones[stones.size() - 1] - stones[stones.size() - 2];
            stones.pop_back();
            stones.pop_back();
            if (diff != 0)
            {
                stones.push_back(diff);
            }
            sort(stones.begin(), stones.end());
        }
        if (stones.size() == 1)
            return stones[0];
        else
            return 0;
    }
};