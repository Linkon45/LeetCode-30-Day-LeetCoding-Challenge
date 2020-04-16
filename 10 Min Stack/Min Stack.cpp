class MinStack
{
    stack<pair<int, int>> s;

public:
    /** initialize your data structure here. */
    MinStack()
    {
    }

    void push(int x)
    {
        int mn;
        if (!s.empty())
            mn = s.top().second;
        else
            mn = x;
        mn = min(mn, x);
        s.push({x, mn});
    }

    void pop()
    {
        s.pop();
    }

    int top()
    {

        return s.top().first;
    }

    int getMin()
    {
        return s.top().second;
    }
};