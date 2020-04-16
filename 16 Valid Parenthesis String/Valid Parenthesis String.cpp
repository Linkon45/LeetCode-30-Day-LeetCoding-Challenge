class Solution
{
public:
    bool checkValidString(string s)
    {
        stack<int> leftParenthesis, star;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
                leftParenthesis.push(i);
            else if (s[i] == ')')
            {
                if (!leftParenthesis.empty())
                    leftParenthesis.pop();
                else if (!star.empty())
                    star.pop();
                else
                    return false;
            }
            else
                star.push(i);
        }
        while (!leftParenthesis.empty() && !star.empty())
        {
            if (leftParenthesis.top() > star.top())
                return false;
            else
            {
                leftParenthesis.pop();
                star.pop();
            }
        }
        if (leftParenthesis.empty())
            return true;
        else
            return false;
        ;
    }
};