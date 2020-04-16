class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        map<string, vector<string>> mp;
        vector<vector<string>> ans;
        for (int i = 0; i < strs.size(); i++)
        {
            string y = strs[i];
            sort(y.begin(), y.end());
            mp[y].push_back(strs[i]);
        }

        for (map<string, vector<string>>::iterator it = mp.begin(); it != mp.end(); it++)
        {
            ans.push_back(it->second);
        }
        return ans;
    }
};