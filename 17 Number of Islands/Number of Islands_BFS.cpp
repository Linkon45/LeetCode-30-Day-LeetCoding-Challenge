//BFS Solution

class Solution
{
public:
    int numIslands(vector<vector<char>> &grid)
    {
        int n = grid.size();
        int m;
        if (n != 0)
            m = grid[0].size();
        else
            return 0;
        int cnt = 0;
        bool visited[n][m];
        int dx[4] = {1, -1, 0, 0};
        int dy[4] = {0, 0, 1, -1};
        memset(visited, 0, sizeof(visited));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (visited[i][j] == 0 && grid[i][j] == '1')
                {
                    cnt++;
                    visited[i][j] = true;
                    queue<pair<int, int>> q;
                    q.push(make_pair(i, j));
                    while (!q.empty())
                    {
                        pair<int, int> p;
                        p = q.front();
                        q.pop();
                        int u = p.first;
                        int v = p.second;

                        for (int i = 0; i < 4; i++)
                        {
                            int row = u + dx[i];
                            int col = v + dy[i];
                            if (((row >= 0 && row < n) && (col >= 0 && col < m)) && (visited[row][col] == 0) && (grid[row][col] == '1'))
                            {
                                visited[row][col] = 1;
                                q.push(make_pair(row, col));
                            }
                        }
                    }
                }
            }
        }
        return cnt;
    }
};
