class Solution {
public:
    string findTheString(vector<vector<int>>& lcp) {
        int n = lcp.size();
        string s(n, '\0');
        
        int i = 0;
        for (char c = 'a'; c <= 'z'; c++) {
            while (i < n && s[i] != '\0') i++;
            if (i == n) break;
            for (int j = i; j < n; j++) {
                if (lcp[i][j] > 0) s[j] = c;
            }
        }
        
        for (char c : s) if (c == '\0') return "";
        
        for (int i = n - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {
                if (s[i] == s[j]) {
                    if (i == n - 1 || j == n - 1) {
                        if (lcp[i][j] != 1) return "";
                    } else {
                        if (lcp[i][j] != lcp[i + 1][j + 1] + 1) return "";
                    }
                } else {
                    if (lcp[i][j] > 0) return "";
                }
            }
        }
        
        return s;
    }
};