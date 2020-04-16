class Solution
{
public:
    string stringShift(string s, vector<vector<int>> &shift)
    {
        for (int i = 0; i < shift.size(); i++)
        {
            int x = shift[i][0];
            int y = shift[i][1] % s.size();
            if (x == 0)
            {
                string temp1 = s.substr(0, y);
                string temp2 = s.substr(y, s.size() - y);
                s = temp2 + temp1;
            }
            else
            {
                string temp1 = s.substr(0, s.size() - y);
                string temp2 = s.substr(s.size() - y, y);
                s = temp2 + temp1;
            }
        }
        return s;
    }
};