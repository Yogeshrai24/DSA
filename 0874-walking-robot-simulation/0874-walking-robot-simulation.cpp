class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        unordered_set<long long> s;
        for (auto &o : obstacles) {
            long long key = (long long)o[0] * 60001 + o[1];
            s.insert(key);
        }

        vector<int> dx = {0, 1, 0, -1};
        vector<int> dy = {1, 0, -1, 0};

        int x = 0, y = 0, d = 0, ans = 0;

        for (int c : commands) {
            if (c == -2) d = (d + 3) % 4;
            else if (c == -1) d = (d + 1) % 4;
            else {
                while (c--) {
                    int nx = x + dx[d];
                    int ny = y + dy[d];
                    long long key = (long long)nx * 60001 + ny;
                    if (s.count(key)) break;
                    x = nx;
                    y = ny;
                    ans = max(ans, x * x + y * y);
                }
            }
        }
        return ans;
    }
};