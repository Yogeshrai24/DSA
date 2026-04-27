class Solution {
public:
    long long minimumTotalDistance(vector<int>& robot, vector<vector<int>>& factory) {
        sort(robot.begin(), robot.end());
        sort(factory.begin(), factory.end());

        int n = robot.size(), m = factory.size();
        vector<vector<long long>> dp(n + 1, vector<long long>(m + 1, 1e15));

        for (int j = 0; j <= m; j++) dp[n][j] = 0;

        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {

                
                dp[i][j] = dp[i][j + 1];

                
                long long cost = 0;
                for (int k = 0; k < factory[j][1] && i + k < n; k++) {
                    cost += abs(robot[i + k] - factory[j][0]);
                    dp[i][j] = min(dp[i][j], cost + dp[i + k + 1][j + 1]);
                }
            }
        }

        return dp[0][0];
    }
};