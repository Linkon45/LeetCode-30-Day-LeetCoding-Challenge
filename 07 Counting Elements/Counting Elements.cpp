class Solution
{
public:
    int countElements(vector<int> &arr)
    {
        map<int, int> mp;
        vector<int> v;
        for (int i = 0; i < arr.size(); i++)
        {
            if (mp[arr[i]] == 0)
                v.push_back(arr[i]);
            mp[arr[i]]++;
        }
        sort(v.begin(), v.end());
        int cnt = 0;
        for (int i = 0; i < v.size() - 1; i++)
        {
            if (v[i + 1] == v[i] + 1)
            {
                cnt += mp[v[i]];
            }
        }
        return cnt;
    }
};