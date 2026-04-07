class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<int> height(n, 0);
        int ans = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                height[j] = matrix[i][j] ? height[j] + 1 : 0;
            }

            vector<int> temp = height;
            sort(temp.begin(), temp.end(), greater<int>());

            for (int k = 0; k < n; k++) {
                ans = max(ans, temp[k] * (k + 1));
            }
        }

        return ans;
    }
};