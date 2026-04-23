
class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, vector<int>> mp;

        for (int i = 0; i < n; i++) {
            mp[nums[i]].push_back(i);
        }

        vector<long long> res(n);

        for (auto &it : mp) {
            vector<int>& idx = it.second;
            int m = idx.size();

            vector<long long> prefix(m + 1);
            for (int i = 0; i < m; i++) {
                prefix[i + 1] = prefix[i] + idx[i];
            }

            for (int i = 0; i < m; i++) {
                long long left = (long long)idx[i] * i - prefix[i];
                long long right = (prefix[m] - prefix[i + 1]) - (long long)idx[i] * (m - i - 1);
                res[idx[i]] = left + right;
            }
        }

        return res;
    }
};