class FirstUnique
{
    queue<int> q;
    map<int, int> mp;

public:
    FirstUnique(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
            if (mp[nums[i]] == 1)
                q.push(nums[i]);
        }
    }

    int showFirstUnique()
    {
        while (!q.empty())
        {
            if (mp[q.front()] == 1)
                return q.front();
            q.pop();
        }
        return -1;
    }

    void add(int value)
    {
        mp[value]++;
        if (mp[value] == 1)
            q.push(value);
    }
};

/**
 * Your FirstUnique object will be instantiated and called as such:
 * FirstUnique* obj = new FirstUnique(nums);
 * int param_1 = obj->showFirstUnique();
 * obj->add(value);
 */