#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> ans(m - k + 1, vector<int>(n - k + 1, 0));
        
        for (int i = 0; i <= m - k; ++i) {
            for (int j = 0; j <= n - k; ++j) {
                vector<int> vals;
                for (int x = i; x < i + k; ++x) {
                    for (int y = j; y < j + k; ++y) {
                        vals.push_back(grid[x][y]);
                    }
                }
                
                sort(vals.begin(), vals.end());
                int min_diff = INT_MAX;
                
                for (int t = 1; t < vals.size(); ++t) {
                    if (vals[t] != vals[t - 1])
                        min_diff = min(min_diff, vals[t] - vals[t - 1]);
                }
                
                ans[i][j] = (min_diff == INT_MAX) ? 0 : min_diff;
            }
        }
        
        return ans;
    }
};