class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        
        vector<int> colSum(n, 0);
        int ans = 0;

        for (int i = 0; i < m; i++) {
            int rowSum = 0;
            for (int j = 0; j < n; j++) {
                rowSum += grid[i][j];
                colSum[j] += rowSum;

                if (colSum[j] <= k)
                    ans++;
                else
                    break; // further columns will only increase sum
            }
        }

        return ans;
    }
};