class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> nums;
        int mod = grid[0][0] % x;

        for (auto &row : grid) {
            for (int val : row) {
                if (val % x != mod) return -1;
                nums.push_back(val);
            }
        }

        sort(nums.begin(), nums.end());

        int mid = nums[nums.size() / 2];

        int ops = 0;
        for (int val : nums) {
            ops += abs(val - mid) / x;
        }

        return ops;
    }
};