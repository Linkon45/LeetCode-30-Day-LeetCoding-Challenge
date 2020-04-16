class Solution
{
public:
    bool backspaceCompare(string S, string T)
    {
        stack<char> s1;
        stack<char> s2;
        for (int i = 0; i < S.size(); i++)
        {
            if (S[i] != '#')
                s1.push(S[i]);
            else
            {
                if (s1.size() != 0)
                    s1.pop();
            }
        }
        for (int i = 0; i < T.size(); i++)
        {
            if (T[i] != '#')
                s2.push(T[i]);
            else
            {
                if (s2.size() != 0)
                    s2.pop();
            }
        }
        int flag = 0;
        if (s1.size() == s2.size())
        {
            while (!s1.empty() && !s2.empty())
            {
                if (s1.top() == s2.top())
                {
                    s1.pop();
                    s2.pop();
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
        }
        else
            return false;
        if (flag == 0)
            return true;
        else
            return false;
    }
};