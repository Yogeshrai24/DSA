class Solution {
public:
    long long minNumberOfSeconds(int mountainHeight, vector<int>& workerTimes) {
        long long left = 1;
        long long right = 1e16;

        while (left < right) {
            long long mid = left + (right - left) / 2;

            if (canReduce(mid, mountainHeight, workerTimes))
                right = mid;
            else
                left = mid + 1;
        }

        return left;
    }

    bool canReduce(long long t, int mountainHeight, vector<int>& workerTimes) {
        long long total = 0;

        for (long long wt : workerTimes) {
            long long x = (sqrt((2.0 * t) / wt + 0.25) - 0.5);
            total += x;

            if (total >= mountainHeight)
                return true;
        }

        return total >= mountainHeight;
    }
};