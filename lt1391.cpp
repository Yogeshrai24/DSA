#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool hasValidPath(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();

        vector<vector<pair<int,int>>> dir = {
            {},
            {{0,-1},{0,1}},   // 1: left, right
            {{-1,0},{1,0}},   // 2: up, down
            {{0,-1},{1,0}},   // 3: left, down
            {{0,1},{1,0}},    // 4: right, down
            {{0,-1},{-1,0}},  // 5: left, up
            {{0,1},{-1,0}}    // 6: right, up
        };

        vector<vector<bool>> vis(m, vector<bool>(n, false));
        queue<pair<int,int>> q;

        q.push({0,0});
        vis[0][0] = true;

        auto valid = [&](int x, int y) {
            return x >= 0 && y >= 0 && x < m && y < n;
        };

        while (!q.empty()) {
            auto [x, y] = q.front();
            q.pop();

            if (x == m - 1 && y == n - 1)
                return true;

            for (auto [dx, dy] : dir[grid[x][y]]) {
                int nx = x + dx;
                int ny = y + dy;

                if (!valid(nx, ny) || vis[nx][ny])
                    continue;

                // check reverse connection
                for (auto [dx2, dy2] : dir[grid[nx][ny]]) {
                    if (nx + dx2 == x && ny + dy2 == y) {
                        vis[nx][ny] = true;
                        q.push({nx, ny});
                    }
                }
            }
        }

        return false;
    }
};

// Driver code for VS Code testing
int main() {
    Solution sol;

    vector<vector<int>> grid = {
        {2,4,3},
        {6,5,2}
    };

    cout << (sol.hasValidPath(grid) ? "True" : "False") << endl;

    return 0;
}